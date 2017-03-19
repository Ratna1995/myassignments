#include"header.h"

void inorder(tree_node *root)
{
	tree_node *node = root;
	if (node == NULL)
          return;

     /* first recur on left child */
     inorder(node->lchild);

     /* then print the data of node */
     printf("%d ", node->data);  

     /* now recur on right child */
     inorder(node->rchild);
}
