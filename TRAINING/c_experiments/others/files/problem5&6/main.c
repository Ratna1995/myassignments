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
	
	if(NULL == (fp = fopen("info.db","w+"))) {
		perror("fopen() failed");
		exit(EXIT_FAILURE);
	}

	for(i = 0; i < 10; i++) {
		printf("Enetr identity:");
		if(NULL == fgets(data[i].e_ident,MAX,stdin)) {
			perror("fgets failed");
			exit(EXIT_FAILURE);
		}
		printf("Enter type:");                                              
        if(NULL == fgets(buff,MAX,stdin)) {                          
            perror("fgets failed");                                             
            exit(EXIT_FAILURE);                                                 
        }
		if(!(data[i].e_type = atoi(buff))) {
			perror("Check your input");                                             
            exit(EXIT_FAILURE);
		}
		//fflush(buff);

		printf("Enter machine:");                                              
        if(NULL == fgets(buff,MAX,stdin)) {                                     
            perror("fgets failed");                                             
            exit(EXIT_FAILURE);                                                 
        }                                                                       
        if(!(data[i].e_machine = atoi(buff))) {                                       
            perror("Check your input");                                         
            exit(EXIT_FAILURE);                                                 
        }
		//free(buff);

		printf("Enter version:");                                               
        if(NULL == fgets(buff,MAX,stdin)) {                                     
            perror("fgets failed");                                             
            exit(EXIT_FAILURE);                                                 
        }                                                                       
        if(!(data[i].e_version = atoi(buff))) {                                       
            perror("Check your input");                                         
            exit(EXIT_FAILURE);                                                 
        } 
		//free(buff);

		printf("Enter entry:");                                               
        if(NULL == fgets(buff,MAX,stdin)) {                                     
            perror("fgets failed");                                             
            exit(EXIT_FAILURE);                                                 
        }                                                                       
        if(!(data[i].e_entry = atoi(buff))) {                                       
            perror("Check your input");                                         
            exit(EXIT_FAILURE);                                                 
        } 
		fwrite(&data[i],sizeof(eh),1,fp);
	}
	
}
