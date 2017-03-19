#include"header.h"                                                              
                                                                                
void preorder(tree_node *root)                                                   
{                                                                               
    tree_node *node = root;                                                     
    if (node == NULL)                                                           
          return;                                                                                    
                                      
     /* then print the data of node */                                          
     printf("%d ", node->data);                                                 
                                                                                
     /* first recur on left child */                                            
     preorder(node->lchild);                                                   
   
     /* now recur on right child */                                             
     preorder(node->rchild);                                                     
}         
