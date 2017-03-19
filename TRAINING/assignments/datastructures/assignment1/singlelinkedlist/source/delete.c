#include"header.h"

void delete()
{
	/*selecting the choice*/
	char *ch = NULL;
	int n;
	
	do{
		printf("enter your choice\n"
			"1.delete at beginning\n"  
			"2.delete at the end\n"
			"3.delete at position\n"
			"4.delete before a given position\n"
			"5.delete after a given position \n"
			"6.delete before a given number\n"
			"7.delete after a given number \n"
			"8.delete at middle\n"
			"9.delete at penultimate node \n"
			"10.exit \n");

		if(NULL == (fgets(ch, 10, stdin))) {
			perror("fgets failed");
			exit(EXIT_FAILURE);
    	}

		if(!(n = atoint(ch))) { //convert character to integer
			printf("check your input\n");
			exit(0);
		}
                                                                                
		switch(n)
		{
			case 1:
				delete_begin();//function call to delete a node at beginning
				break;
			case 2:
				delete_end();//function call to delete a node at the end 
            	break;                                                          
        	case 3:                                                             
            	delete_pos();//function call to delete a node from a given pos     
            	break;                                                          
    		case 4:                                                             
            	delete_bef();//function call to delete node before a given pos
            	break;                                                          
        	case 5:                                                             
            	delete_after();//function call to delete node after a given pos                      
            	break;                                                          
        	case 6:               
				/*function call to delete a node before a given element*/
            	delete_bef_node();                                           
            	break;                                                          
    		case 7:                                                      
				/*funciton call to delete a node after a given element*/
            	delete_after_node();                                         
            	break;                                                          
        	case 8:                                                     
				/*function call to delete a node at the middle of the list*/
            	del_middle();                                           
            	break;                                                          
        	case 9:                                                         
				/*function call to delete a node a penultimate position*/
            	del_penult();                                        
            	break;                                                          
        	case 10:                                                            
            	exit(0);                                                        
        	default:
				printf("enter correct choice\n");
				break;
		}
	}while(n > 10);
}
		
