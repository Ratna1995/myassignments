#include<stdio.h>
#include<stdlib.h>

#define MAX 50

typedef struct node {
	int data;
	struct node *lchild;
	struct node *rchild;
}tree_node;

int val;
char ele[MAX];
tree_node *root;

void create_node(int val);

int atoint(char ch[]);

//void display();

void inorder(tree_node *);

void preorder(tree_node *);

void postorder(tree_node *);
