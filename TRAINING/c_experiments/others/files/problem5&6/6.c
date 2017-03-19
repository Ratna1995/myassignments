#include"header.h"                                                              
                                                                                
int main()                                                                      
{                                                                               
    FILE *fp;                                                                   
                                                                                
    eh data[10];                                                                
    char *buff;   
	int i = 0;
                                                              
                                                                                
    if(NULL == (buff = (char*)malloc(MAX))) {                                   
        perror("malloc failed");                                                
        exit(EXIT_FAILURE);                                                     
    }                                                                           
                                                                                
    if(NULL == (fp = fopen("info.db","r"))) {                                  
        perror("fopen() failed");                                               
        exit(EXIT_FAILURE);                                                     
    }                                                                           
              
	printf("ident\ttype\tmachine\tversion\tentry\n");                                                                  
    for(i = 0; i < 10; i++) {  
		fread(&data[i],sizeof(eh),1,fp);
		printf("%s\t",data[i].e_ident);
		printf("%d\t",data[i].e_type);
		printf("%d\t",data[i].e_machine);
		printf("%d\t",data[i].e_version);
		printf("%d\n",data[i].e_entry);
		}
}
