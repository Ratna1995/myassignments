#include<stdio.h>
#include<stdlib.h>

#define MAX 5

int front;
int rear;
int queue[5];	//declaration of stack

//function declaration of push, pop and display
void enqueue(int);

void dequeue();

void display();

int atoint(char *);
