#include"header.h"

void insert(int val)
{
 
	tree_node *create = NULL;	//to create a node
	tree_node *current = NULL;	//current pointer
	tree_node *parent = NULL;	//pointer to parent node
	
	/*allocates memory for create*/
	if(NULL == (create = (tree_node *) malloc (sizeof(tree_node)))) {
		printf("malloc failed");
		exit(0);
	}          
                                                        
    /*allocates memory for current*/                                                                
	if(NULL == (current = (tree_node *) malloc ( sizeof(tree_node)))) {
		printf("malloc failed");
		exit(0);
	}          
	
	/*allocates memory for parent */
	if(NULL == (parent = (tree_node *) malloc (sizeof(tree_node)))) {
		printf("malloc failed");
		exit(0);
	}          

	/*enter the value to be inserted*/
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
	
	/*creates a node*/
	create -> data = val;
	create -> lchild = NULL;
	create -> rchild = NULL;

	/*if there is no node it is created, or else it is linked to newly created
		node*/
	if(root == NULL) 
		root = create;
	else {
		current = root;
	
		while(1) {
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
	free(parent);	
	free(current);
}
