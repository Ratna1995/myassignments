#include"header.h"

void deletion(int val)
{
	tree_node *current = NULL;  //current pointer                               
    tree_node *parent = NULL;   //pointer to parent node                                                     
                                                                                
    /*allocates memory for current*/                                            
    if(NULL == (current = (tree_node *) malloc ( sizeof(tree_node)))) {         
        printf("malloc failed");                                                
        exit(0);                                                                
    }                                           
	
	/*enter the value to be deleted*/                                          
    printf("enter element to be deleted:\n");                                                 
    if(NULL == (fgets(ele, 50, stdin))) {                                       
        perror("fgets failed");                                                 
        exit(EXIT_FAILURE);                                                     
    }                                                                           
                                                                                
    /*converts element from alphabet to integer*/                               
   if(!(val = atoint(ele))) {                                                   
        perror("check your input\n");                                           
        exit(0);                                                                
    }            

	/*checks if the root is null, if null prints tree is empty*/
	if(root == NULL)
		printf("tree is empty\n");
	else {
		current = root;
		if((current -> lchild == NULL) && (current -> rchild == NULL)) {
			if(root -> data == val) {
				root = NULL;
				return;
			}
		}
		//checks if the element is present in the tree
		while(val != current -> data) {
			if(val < (current -> data)) 
				current = current -> lchild;
			else if(val > (current -> data))
				current = current -> rchild;
			if(val == (current -> data)){
				printf("element found");
				break;
			}
			parent = current;
		}
		//if element is present, delete the element
		if(val < parent -> data) {
			if((parent -> lchild)!= NULL)
				parent -> lchild = current -> lchild;
			else if(current -> rchild != NULL)
				parent -> lchild = current -> rchild;
			else 
				parent -> lchild = NULL;
		}
		else if(val > parent -> data) {
			if((parent -> rchild)!= NULL)
				parent -> rchild = current -> rchild;
			else if(parent -> lchild != NULL)
				parent -> rchild= current -> lchild;
			else 
				parent -> rchild = NULL;
		}
	}
/*	current = root;
	if(root==NULL){//check for head NULL                                            
        printf("tree is empty\n");                                                      
        exit(1);                                                                
    }                                                               
    else{                                                                       
        while(current->data != val){                                          
            if(val>=current->data){                                           
                parent=current;                                                 
                current=current->rchild;                                        
            }                                                                   
            else {                                                               
                parent=current;                                                 
                current=current->lchild;                                        
      		}                                 
        }                                                                       
    }                                                                            
    if((current->lchild != NULL)&&(current->rchild==NULL)){                     
        if(parent->rchild==current){
			if(current -> lchild == NULL)                                       
                parent -> rchild = current -> rchild;                           
            else                                             
            	parent -> rchild = current -> lchild;                                     
        }
		else {
			if(current -> rchild == NULL)                                       
                parent -> rchild = current -> lchild;                           
            else                                                                    
            	parent -> rchild = current -> rchild;
		}
	}                                                                       
                                                                                
    if((current->lchild==NULL)&&(current->rchild!=NULL)){                       
        if(parent->lchild==current) {
			if(current -> lchild == NULL)
				parent -> lchild = current -> rchild;
			else                                           
            	parent -> lchild = current -> lchild;
		}
        else {
			if(current -> rchild == NULL)   
				parent -> lchild = current -> lchild;
			else                                                                
            	parent -> lchild = current -> rchild;
		}
	}                                                                       
                                                                                
    if((current->lchild==NULL)&&(current->rchild==NULL)){                       
        if(parent->lchild==current)                                             
            parent->lchild=NULL;                                                
        else                                                                    
            parent->rchild=NULL;
	} */
	
	printf("node deleted\n");    
}

