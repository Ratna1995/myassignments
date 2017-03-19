#include"header.h"

void display(tree_node *root)
{
	//tree_node *node = root;
	if (root == NULL)
		return;
     /* first recur on left child */
     display(root->lchild);

     /* then print the data of node */
    printf("%d ", root->data);  

     /* now recur on right child */
     display(root->rchild);
}
