#include"header.h"

void merging(int arr[], int low, int mid, int high)
{
	int i, j, k;	//indexes
	int temp[MAX];	//temporary array
	i = low;	//low is assigned to i	
	j = mid + 1;	//mid + 1 is assigned to j
	k = 0;		//initially k is 0
	
	/* sorts the elements in the array*/
	while(i <= mid && j <= high){
    	if(arr[i] < arr[j]){
     		temp[k++] = arr[i++];       
    	}
    	else {
      		temp[k++] = arr[j++];
    	}
  	}
  
	while(i <= mid){
    	temp[k++] = arr[i++];
  	}
  
 	while(j <= high){
    	temp[k++] = arr[j++];
  	}
  
  	for(i=high; i >= low; i--){	
    	arr[i] = temp[--k];        
  	} 
	
}
