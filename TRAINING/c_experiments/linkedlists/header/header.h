//header files
#include<stdio.h>                                                               
#include<stdlib.h>                                                               
                                                                                
#define size_buff 50                                                            


//structer of a node
                                                                                
typedef struct node {                                                                   
    int data;                                                                   
    struct node *link;                                                          
}sl;

sl *head;    

int size;                                                                                                                                      
//prototypes

int my_atoi(char*);
	
void display();

//insertion funtions
void insertion();

sl *create_node(int,sl *);

void pos_insert(int, int);

void i_begin();

void i_end(int);

void i_pos(int);

void i_bef_pos(int);
	
void i_aft_pos(int);

void i_bef_num(int);

void i_aft_num(int);

void i_penult(int);

void i_middle(int);

//deletion functions

void deletion();                                                               
                                                                                                                                     
void del_node(int);                                                                                                                  
                                                                                
sl* d_begin();                                                              
                                                                                
void d_end();                                                                
                                                                                
void d_pos();                                                                
                                                                                
void d_bef_pos();                                                            
                                                                                
void d_aft_pos();                                                            
                                                                                
void d_bef_num();                                                            
                                                                                
void d_aft_num();                                                            
                                                                                
void d_penult();                                                             
                                                                                
void d_middle();
