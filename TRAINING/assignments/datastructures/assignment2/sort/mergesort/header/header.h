#include<stdio.h>
#include<stdlib.h>

#define MAX 50	//macro for MAX size

/*function prototypes for mergesort, merging and atoi*/
void merge_sort(int arr[], int low, int high);
void merging(int arr[], int low, int mid, int high);
int atoint(char ch[]);
