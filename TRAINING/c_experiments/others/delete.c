#include"header.h"

void delete_node(NODE head,int value)
{
	NODE temp=NULL;//temp node
	NODE parent=NULL;//parent node

	temp=head;

	if(temp==NULL){//check for head NULL
		printf("empty\n");
		exit(1);
	}

	else{
		while(temp->data != value){
			if(value>=temp->data){
				parent=temp;
				temp=temp->rchild;
			}
			else{
				parent=temp;
				temp=temp->lchild;
			}
		}
	}

	if((temp->lchild != NULL)&&(temp->rchild==NULL)){
		if(parent->lchild==temp)
			parent->lchild=temp->lchild;
		else
			parent->rchild=temp->rchild;
		}

	if((temp->lchild==NULL)&&(temp->rchild!=NULL)){
		if(parent->lchild==NULL)
			parent->lchild=temp->rchild;
		else
			parent->rchild=temp->rchild;
		}

	if((temp->lchild==NULL)&&(temp->rchild==NULL)){
		if(parent->lchild==temp)
			parent->lchild=NULL;
		else
			parent->rchild=NULL;
		}
	printf("deleted\n");
	}
