#include"header.h"

int main()
{
	head = NULL;//head pointer
	int choice;//selection of choice
	int pos;//position of number
	int count = 0;//count inserted nodes
	int num;//number to be checked and inserted
	int ch;//select option
	int c;//select option
	char len[10];//character array

	while(1){

		printf("1-Insert\n 2-Delete \n3-Display\n 4-Exit\n");                       
		if(NULL == ( fgets(len, sizeof(len), stdin) )) {
		printf("enter the input\n");
		exit(0);
	}
	choice = validate( len );  
		switch(choice){
			//select the type of insert
			case 1: printf("1-Insert at the end\n");                                            
				printf("2-Insert at the begin\n");                                          
    				printf("3-Insert at the given position\n");                                 
    				printf("4-Insert before a given position\n");                               
    				printf("5-Insert after a given position\n");                                
    				printf("6-Insert before a given number\n");                                 
    				printf("7-Insert after a given number\n");                                  
    				printf("8-Insert at the middle\n");                                         
    				printf("9-Insert at penultimate node\n");                                   
                                                                                
    				if(NULL == ( fgets(len, sizeof(len), stdin) )) {
					printf("enter the input\n");
					exit(0);
				}
	
				ch = validate( len );                                                
                                                                                
    		switch(ch){                                                             
                                                                                
        			case 1: head = insert(head);
					count++;
                			break;            

				case 2:	head = insert_big(head);
					count++;
					break;

				case 3:	printf("enter position\n");
					if(NULL == ( fgets(len, sizeof(len), stdin) )) {
						printf("enter the input\n");
						exit(0);
					}
	
					pos = validate( len );
					head = insert_pos(head, pos);
					count++;
					break;
				
				case 4:	printf("enter position\n");                                     
		        		if(NULL == ( fgets(len, sizeof(len), stdin) )) {
						printf("enter the input\n");
						exit(0);
					}
	
					pos = validate( len ); 
					head = insert_bef_pos(head, pos);
					count++;
					break;

				case 5:	printf("enter position\n");                                     
		        		if(NULL == ( fgets(len, sizeof(len), stdin) )) {
						printf("enter the input\n");
						exit(0);
					}
	
					pos = validate( len );
					head = insert_aft_pos(head, pos);
					count++;
					break;

				case 6:	printf("enter the number\n");
					if(NULL == ( fgets(len, sizeof(len), stdin) )) {
						printf("enter the input\n");
						exit(0);
					}
	
					num = validate( len );
					head = insert_bef_no(head, num);
					count++;
					break;

				case 7:	printf("enter the number\n");                                     
		        		if(NULL == ( fgets(len, sizeof(len), stdin) )) {
						printf("enter the input\n");
						exit(0);
					}
	
					num = validate( len ); 
					head = insert_aft_no(head, num);
					count++;
					break;

				case 8:	head = insert_middle(head, count);
					break;

				case 9:	head = insert_penultimate(head);
					break;
                                                                                
    		}                                               
					getchar();
					break;
		//select the type of deletion
			case 2: printf("1-delete at the end\n");                                            
				printf("2-delete at the begin\n");                                          
    				printf("3-delete at the given position\n");                                 
    				printf("4-delete before a given position\n");                               
    				printf("5-delete after a given position\n");                                
    				printf("6-delete before a given number\n");                                 
    				printf("7-delete after a given number\n");                                  
    				printf("8-delete at the middle\n");                                         
    				printf("9-delete at penultimate node\n");                                   
                                                                                
    				scanf("%d",&c);                                                        
                                                                                
    		switch(c){                                                             
                                                                                
        			case 1: head = del_at_end(head);
                				break;            

				case 2:	head = del_at_beg(head);
						break;

				case 3:	printf("enter position\n");
					if(NULL == ( fgets(len, sizeof(len), stdin) )) {
						printf("enter the input\n");
						exit(0);
					}
	
					pos = validate( len );
					head = del_pos(head, pos);
					break;
				
				case 4:	printf("enter position\n");                                     
		        		if(NULL == ( fgets(len, sizeof(len), stdin) )) {
						printf("enter the input\n");
						exit(0);
					}
	
					pos = validate( len ); 
					head = del_bef_pos(head, pos);
					break;

				case 5:	printf("enter position\n");                                     
		        		if(NULL == ( fgets(len, sizeof(len), stdin) )) {
						printf("enter the input\n");
						exit(0);
					}
	
					pos = validate( len ); 
					head = del_aft_pos(head,pos);
					break;

				case 6:	printf("enter the number\n");
					if(NULL == ( fgets(len, sizeof(len), stdin) )) {
						printf("enter the input\n");
						exit(0);
					}
	
					num = validate( len );
					head = del_bef_no(head,num);
					break;

				case 7:	printf("enter the number\n");                                     
		        		if(NULL == ( fgets(len, sizeof(len), stdin) )) {
						printf("enter the input\n");
						exit(0);
					}
	
					num = validate( len ); 
					head = del_aft_no(head, num);
					break;

				case 8:	head = del_middle(head, count);
					break;

				case 9:	head = del_penultimate(head);
						break;
                                                                                
    		}                                               

					break;

			case 3:	display(head);
				display2(head);
					break;

			case 4:	exit(0);
		}
	}

	return 0;
}

