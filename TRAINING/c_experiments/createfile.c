#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#if 0
int main()
{
	FILE *fp1;
	FILE *fp2;
	char *ch;
	ch = (char *) malloc (50 * sizeof(char));	
	*ch = 10;
//	int *buf;
	if(NULL == (fp1 = fopen("1.txt", "w+"))) {
		perror("fopen failed");
		exit(0);
	}
	if(NULL == (fp2 = fopen("2.txt", "w+"))){
		perror("can't open file");
		exit(0);
	}
	
	if(0 == (fwrite(ch, 4, 1, fp1))) {
		printf("can't write");
		exit(0);
	}
/*	rewind(fp1);
	if(0 == (fread(buf, 2,2, fp1))) {
		printf("can't read");
		exit(0);
	}*/
	printf("%d",sizeof(ch));	


	if(0 == (fprintf(fp2,"%d", 10))) {
		printf("fprintf failed");
		exit(0);
	}
	printf("%d", sizeof(fp2));
/*	rewind(fp2);
	if(EOF == (fscanf(fp2,"%d", buf))) {
		perror("EOF");
		exit(0);
	}
//	printf("%d", b);*/

	return 0;
}
#endif

#if 0
int main()
{
	FILE *fp;
	char str[] = "global edge";
	char buffer[100];

	if(NULL == (fp = fopen("2.txt", "w+"))) {
		perror("fopen failed");
		exit(0);
	}

	if(0 == (fwrite(str, strlen(str) + 1, 2, fp))) {
		printf("not success");
		exit(0);	
	}
	
	rewind(fp);	
	
	if(0 == (fread(buffer, strlen(str) + 1, 2, fp))) {
		printf("fread failed");
		exit(0);
	}

	printf("%s\n", buffer);
	return 0;
}
#endif

#if 1
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<unistd.h>

int main(int argc, char *argv[])
{
	int fd;
	char *buf;
	char *buf1;
	
	buf = (char *) malloc (50 * sizeof(char));
	buf1 = (char *) malloc (50 * sizeof(char));
	
	if(argc == 2){
	if(-1 == (fd = open(argv[1],O_CREAT | O_RDWR,0666))) {
		perror("can't open file");
		exit(0);		
	}
	printf("enter the value\n");
	fgets(buf, 50, stdin);

	if(-1 == (write(fd, buf , 10)))	{
		perror("can't write");
		exit(0);
	}
	
	read(fd,buf1,10);
	printf("%s", buf);
	}
	else
		printf("enter command line arguments\n");
	return 0;
}
#endif	
