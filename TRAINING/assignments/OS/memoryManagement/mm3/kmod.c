#include<linux/init.h>
#include<linux/module.h>
#include<linux/fs.h>
#include<linux/sched.h>
#include<linux/cdev.h>
#include<asm/uaccess.h>
#include<linux/device.h>
#include<linux/slab.h>
#include <linux/highmem.h>


MODULE_LICENSE("Dual BSD/GPL");

#define FIRST_MINOR 10
#define NR_DEVS 1    //Number of device numbers

//Function Declaration for syscall definitions
int myOpen (struct inode *inode, struct file *filep);
int myRelease (struct inode *in, struct file *fp);
long myIoctl (struct file *fp, unsigned int, unsigned long);

//Initialization routines
static int myInit(void);
static void myExit(void);

struct file_operations fops = {
	.owner = THIS_MODULE,
	.open = myOpen,
	.release = myRelease,
	.unlocked_ioctl = myIoctl
};

char *devname;
int majNo;
static dev_t mydev;
struct cdev *my_cdev;

module_param(devname,charp,0000);//to pass command line arguements devname=mychar

static struct class *mychar_class;
struct device *mychar_device;

int myOpen(struct inode *inode, struct file *filep)
{
	printk(KERN_INFO "open successful\n");
	return 0;
}

int myRelease(struct inode *in, struct file *fp)
{
	printk(KERN_INFO"file released\n");
	return 0;
}

long myIoctl(struct file *fp, unsigned int pid, unsigned long a)
{
	int i, j;
	struct task_struct *ptr = find_task_by_vpid(pid);
	struct mm_struct *hm = ptr -> mm;
	unsigned long *pgd = hm -> pgd;
	unsigned int *ph = NULL;
	unsigned long b;
	
	printk("%p\n", a);
	printk("b= %p\n", a >> 22);
	printk("mm -> pgd + %p\n", (hm -> pgd));
	printk("mm -> pgd + %p\n", ((hm -> pgd) | b));
//	printk("mm -> pgd + %p\n", ((hm -> pgd) | b));
	
/*	for(i = 0; i < 1024; i++){
	//	if(i < 768){
		if(*(pgd + i) != NULL){
			printk("pgd[%d]= %x", i, *(pgd + i));
			ph = (unsigned int *)kmap(&mem_map[*(pgd+i) >> 12]);
			for(j = 0; j < 1024; j++){
				if(*(ph +j) != NULL){
					printk("pt[%d] = %x\n", j, *(ph + j));
				} 
			}
		}	
	}*/
/*		else if(i >= 768){
				printk("kernel virtual address");
				if(*(pgd + i) != NULL){
					printk("pgd[%d]= %x", i, *(pgd + i));

					ph = (unsigned int *)kmap(&mem_map[*(pgd+i) >> 12]);
					for(j = 0; j < 1024; j++){
						if(*(ph +j) != NULL){
						printk("pt[%d] = %x\n", j, *(ph + j));
					} 
				}
			}	
		}*/
//	}	
	return 0;
}
static int __init myInit(void)
{
	int ret = -ENODEV;
	int status;

	printk(KERN_INFO "Initializing character device\n");

	status = alloc_chrdev_region(&mydev, FIRST_MINOR, NR_DEVS, devname);
	if(status < 0){
		printk(KERN_INFO "device number allocation failed : %d\n", status);
		goto err;
	}

	printk(KERN_INFO "Major number allocated = %d\n", MAJOR(mydev));
	my_cdev = cdev_alloc();
	if(my_cdev == NULL){
		printk(KERN_INFO "cdev_alloc failed\n");
		goto err_cdev_alloc;
	}

	cdev_init(my_cdev, &fops);
	my_cdev -> owner = THIS_MODULE;

	status = cdev_add (my_cdev, mydev, NR_DEVS);
	if(status){
		printk(KERN_ERR "cdev_add failed\n");
		goto err_cdev_add;
	}

	mychar_class = class_create(THIS_MODULE, devname);
	if(IS_ERR(mychar_device)){
		printk(KERN_ERR "class_create() failed \n");
		goto err_class_create;
	}

	mychar_device = device_create(mychar_class, NULL, mydev,NULL,devname);
	if(IS_ERR(mychar_device)){
		printk(KERN_ERR "device_create() failed \n");
		goto err_device_create;
	}

	return 0;

err_device_create:
	class_destroy(mychar_class);

err_class_create:
	cdev_del(my_cdev);

err_cdev_add:
	kfree(my_cdev);

err_cdev_alloc:
	unregister_chrdev_region(mydev, NR_DEVS);

err:
	return ret;
}

static void myExit(void)
{
	printk(KERN_INFO "Exiting the character driver \n");

	device_destroy(mychar_class, mydev);
	class_destroy(mychar_class);
	cdev_del(my_cdev);
	unregister_chrdev_region(mydev,NR_DEVS);

	return;

}

module_init(myInit);
module_exit(myExit);



