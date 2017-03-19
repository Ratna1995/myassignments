#include <stdio.h> //include header

#include <stdlib.h> //include standard library

#define MAX 64 //macro to define MAX

typedef struct dl {
	char *data;
	struct dl *previous;
	struct dl *next;
}dll;

/*macros for dynamic memory allocation*/
#define dmc(str) (char *)malloc(sizeof(char)*MAX)

#define dms(str) (dll *)malloc(sizeof(dll)*MAX) 

#define get(str) fgets(str,MAX,stdin)

// function to insert catalog
dll *insert_end(dll *head);
void insert_mid(dll *head);
dll *insert_begin(dll *head);

//function to delete catalog
dll *delete_begin(dll *head);
dll *delete_end(dll *head);
void delete_mid(dll *head);

int atoint(char *);
//function to display list
void display(dll *head);
void display_rev(dll *head);
