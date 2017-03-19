#include"header.h"

sl *head = NULL;
int size = 0;

int main()
{
	typedef enum {
		insertione = 1,
		deletione,
		displaye,
		exite,
	} operation;
	
	operation ch;
	
	char *buff;	
	
	if(NULL == (buff = (char*)malloc(size_buff * sizeof(char)))) {              
        perror("malloc Error");                                                 
        exit(EXIT_FAILURE);                                                     
    }                                                                           
                                                                                 
	do {
		printf("\n1.Insertion\n2.Deletion\n3.Display\n4.Exit");
		if(NULL == fgets(buff,size_buff,stdin)) {                                   
       		 perror("fgets failure");                                                
     		 exit(EXIT_FAILURE);                                                     
    	}  
		ch = (operation) atoi(buff);
		
		switch(ch)
		{
			case insertione :
							i_begin();
							break;
			case deletione :
							head = d_begin();
							break;
			case displaye :
							display();
							break;
			case exite :
							exit(0);
							break;
			default :
							printf("\nCheck your input");
		}
	} while(1);
	return 0;
}
	
