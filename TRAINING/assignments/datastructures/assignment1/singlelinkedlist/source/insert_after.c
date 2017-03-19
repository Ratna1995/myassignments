#include"header.h"

void insert_after(int val)
{
	/*position at which the node has to be inserted*/
	char *p = NULL;                                                                 
    int pos;                                                                    
                                                                                
    printf("enter the position where the node has to be inserted:\n");          
    if(NULL == (fgets(p, MAX, stdin))) {                                        
        perror("fgets failed");                                                 
        exit(EXIT_FAILURE);                                                     
    }                                                                           
                                                                                
    if(!(pos = atoint(p))) {
		printf("invalid input\n");
		return;
	}
                                                                                
    position((pos+1), val);//function call to insert a node after a given pos                           
}                             
