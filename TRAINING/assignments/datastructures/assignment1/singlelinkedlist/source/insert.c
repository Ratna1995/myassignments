#include"header.h"

void insert()
{
	char *element = NULL;   //stores the value to be inserted in node                                                          
                                                                                
    char *ch = NULL;   //choose a case                                                 
    int n;

	/*allocates memory for element*/                                            
    if(NULL == (element = (char *) malloc (sizeof(char)))) {                    
        printf("can't allocate memory\n");                                      
        exit(0);                                                                
    }          

	if(NULL == (ch = (char *) malloc (100 * sizeof(char)))) {                   
        printf("malloc failed");                                                
        exit(0);                                                                
    }                           
	
	 /* enters a element*/                                                      
    printf("enter element:\n");                                                 
    if(NULL == (fgets(element, 50, stdin))) {                                   
        perror("fgets failed");                                                 
        exit(EXIT_FAILURE);                                                     
    }                                                                           
                                                                                
    /*converts element from string to integer*/                                 
    if(!(val = atoint(element))) {                                               
        perror("check your input\n");                                           
        exit(0);                                                                
    }                                                                                                                                     
	printf("enter your choice\n"
			"1.insert at beginning\n"
			"2.insert at the end\n"
			"3.insert at position\n"
			"4.insert before a given position\n"
			"5.insert after a given position\n"
			"6.insert before a given number\n"
			"7.insert after a given number\n"
			"8.insert at middle\n"
			"9.insert at penultimate node\n"
			"10.exit\n");

	if(NULL == (fgets(ch, 10, stdin))) {                                    
		perror("fgets failed");                                             
		exit(EXIT_FAILURE);                                                 
	}                                                                       

	if((n = atoint(ch))<0) { //convert character to integer                          
		printf("invalid input\n");
		return;
	}

	switch(n)                                                               
	{                                                                       
		case 1:                                                             
			insert_begin(val);//function call to insert a node at beginning 
			break;                                                          
		case 2:                                                             
			insert_end(val);//function call to insert a node at the end                                                      
			break;                                                          
		case 3:                                                             
			insert_pos(val);//function call to insert a node at a given position         
			break;                                                          
		case 4:
			insert_bef(val);//function call to insert before a given position
			break;
		case 5:
			insert_after(val);//function call to insert after a given position
			break;
		case 6:
			insert_bef_node(val);//function call to insert a node before a given number
			break;
		case 7:                                                             
			insert_after_node(val);//function call to insert a node after a given number
			break;
		case 8:
			insert_middle(val);//function call to insert a node at the middle
			break;
		case 9:
			insert_penultimate(val);//function call to insert a node at penultimate position
			break;
		case 10:
			exit(0);                                                        
		default:                                                            
			printf("enter correct input\n"); 
			break;
	}
}

