#include<stdio.h>
#include<stdlib.h>

#define MAX 10

/* structure of a node*/
struct node                                                                     
{                                                                               
    int data;                                                                   
    struct node *next;                                                          
};

int val;

struct node *head;

int atoint(char *);	

void insert();
void insert_begin(int );
void insert_end(int );
void insert_bef(int );
void insert_pos(int );
void insert_after(int );
void insert_bef_node(int );
void insert_after_node(int );
void insert_middle(int );
void insert_penultimate(int );
void position(int, int);
	
void delete();
void delete_begin();
void delete_end();
void delete_bef();
void delete_after();
void delete_pos();
void delete_bef_node();
void delete_after_node();
void del_middle();
void del_penult();
void delpos(int );

void display();
