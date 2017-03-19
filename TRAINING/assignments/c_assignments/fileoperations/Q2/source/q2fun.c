#include"header.h"

/* function definition for seraching a string in a file*/                       
int search_string(char *str)                                                    
{                                                                               
    int i = 0;  //index                                                         
    int line_no = 1;    //line number of the file is assigned to 1              
    int offset;                                                                 
    char ch;    //character                                                     
    FILE *fp;   //file pointer                                                  
                                                                                
    /* opens a file to read from it*/                                           
    if(NULL == (fp = fopen("text.txt", "r"))) {                                 
        perror("fopen failed\n");                                               
        exit(1);                                                                
    }                                                                           
                                                                                
    while((ch = fgetc(fp)) != EOF) {                                            
        if(ch == 10) {                                                          
            line_no++;                                                          
            offset = ftell(fp);                                                 
        }                                                                       
    /* compares the string with the content in the file*/                       
        if(ch == str[i]) {                                                      
            i++;                                                                
            while(str[i] != '\n') {                                             
                if((ch = fgetc(fp)) == str[i]){                                 
                    i++;                                                        
                } else {                                                        
                    i = 0;                                                      
                    break;                                                      
                }                                                               
            }                                                                   
        }                                                                       
        if(str[i] == '\n') {
			if((fseek(fp, offset, SEEK_SET)) == -1) {                           
                perror("fseek failed\n");                                       
            }                                                                   
                                                                                
            while((ch = fgetc(fp)) != '\n') {                                   
                printf("%c",ch);                                                
            }                                                                   
                                                                                
            printf("\n");                                                       
            return line_no;                                                     
            break;                                                              
        }                                                                       
    }                                                                           
    return 0;                                                                   
}                    
