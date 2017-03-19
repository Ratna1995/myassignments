#include"header.h"                                                              
                                                                                
void postorder(tree_node *root)                                                   
{                                                                               
    tree_node *node = root;                                                     
    if (node == NULL)                                                           
          return;                                                               
                                                                                
     /* first recur on left child */                                            
     postorder(node->lchild);                                                                                                    
                                                                                
     /* now recur on right child */                                             
     postorder(node->rchild);                                                     
	
	/* then print the data of node */                                          
     printf("%d ", node->data);   
}         
