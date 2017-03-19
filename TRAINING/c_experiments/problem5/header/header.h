#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *next;
	struct node *prev;
	};

typedef struct node * st;
st head;

#define MEM ((st)malloc(sizeof(st)))

st insert(st);
void display(st);
void display2(st);
st insert_big(st head);
st insert_pos(st head,int);
st insert_bef_pos(st head,int); 
st insert_aft_pos(st head,int);
st insert_bef_no(st head,int);
st insert_aft_no(st head,int);
st insert_middle(st ,int);
st insert_penultimate(st);
st del_at_end(st);
st del_at_beg(st);
st del_pos(st,int);
st del_bef_pos(st,int);
st del_aft_pos(st,int);
st del_bef_no(st,int);
st del_aft_no(st,int);
st del_middle(st,int);
st del_penultimate(st);
int validate(char []);
