#include<stdio.h>
#define MAX 2
void enqueue(int element[]);
int dequeue();
int queue[2];	
int rear = -1;
int front = -1;
int i;

int main()
{
	int element[2];	
//	int rear = -1;
//	int front = -1;
	int res;
	
	printf("enter a element\n");
	for(i = 0; i<2; i++)
	scanf("%d", &element[i]);
	
	enqueue(element);
	for(i = 0;i<2;i++)
	printf("%d\n", element[i]);
	
	res = dequeue();
	printf("res= %d\n", res);
	return 0;
}

void enqueue(int element[])
{
	i = 0;
	if(rear >= MAX) 
		printf("queue is full");
	else
		queue[++rear] = element[i++];
}

int dequeue()
{
	if(front == -1 && front == rear)
		printf("queue is empty");
	else {
		queue[++front] = 0;
	}
	return queue[rear];
}

		
