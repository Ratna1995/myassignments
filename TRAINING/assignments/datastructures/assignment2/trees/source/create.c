#include"header.h"

void create_node(int val)
{
 
	tree_node *create = NULL;
	tree_node *current = NULL;
//	tree_node *root = NULL;
	tree_node *parent = NULL;
	
	if(NULL == (create = (tree_node *) malloc (sizeof(tree_node)))) {
		printf("malloc failed");
		exit(0);
	}          
                                                        
                                                                    
	if(NULL == (current = (tree_node *) malloc ( sizeof(tree_node)))) {
		printf("malloc failed");
		exit(0);
	}          
	
	if(NULL == (parent = (tree_node *) malloc (sizeof(tree_node)))) {
		printf("malloc failed");
		exit(0);
	}          

    printf("enter element:\n");                                                 
    if(NULL == (fgets(ele, 50, stdin))) {                                       
        perror("fgets failed");                                                 
        exit(EXIT_FAILURE);                                                     
    }                                                                           
                                                                                
    /*converts element from alphabet to integer*/                               
   if(!(val = atoint(ele))) {                                                   
        perror("check your input\n");                                           
        exit(0);                                                                
    }              
	
	create -> data = val;
	create -> lchild = NULL;
	create -> rchild = NULL;

	if(root == NULL) 
		root = create;
	else {
		current = root;
	
		while(root != NULL) {
			parent = current;
			if(val < (parent -> data)) {
				if(current -> lchild == NULL) {
					current -> lchild  = create;
					return;
				}
				current = current -> lchild;
			}
			else {
				if(current -> rchild == NULL) {
					current -> rchild = create;
					return;
				}
				current = current -> rchild;
			}
		}
	}
}

	
			
	
		
	
	
