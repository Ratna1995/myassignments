#include<stdio.h>
#include<stdlib.h>

#define MAX 50 //macro for MAX size

/* structure for node*/
typedef struct node {
	int data;
	struct node *lchild;
	struct node *rchild;
}tree_node;

int val;	//value
char ele[MAX];	//element

tree_node *root;	//root node

/*function prototypes for inserting, displaying and deleting a node*/
void insert(int val);

int atoint(char ch[]);

void display(tree_node *root);

void deletion(int val);
