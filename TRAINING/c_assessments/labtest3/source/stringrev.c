#include"header.h"

char* str_rev(char *str)
{
	char *temp;		//variable to store the result
 	int i;			//index
	int j;			//index
	int k = 0;		//index
	int count = 0;
	int length;		//to store the length of string

	length = strleng(str); //length of string is calculated
	
	i = length - 1; // length is assigned to i
	*(str + length - 1) = ' '; // adding space at the end of string
	temp = (char *) malloc (MAX * sizeof(char));//allocates memory for temp
	
	while(i >= 0) {				
		if(*(str + i) == ' ') { // checks if string is equal to blank space
			j = i + 1;		
			while(j < length) { 
				*(temp + k) = *(str + j);//stores the string in temp
				j++;					//increment j by 1
				k++;					//increment k by 1
				count++;
			}
		length = length - count;
		count = 0;
		}
		i--;
	}

	for(i = 0; i < length; i++, k++){
		*(temp + k) = *(str + i);
	}
	*(temp + k) = '\0';
	return temp;
	free(temp);
}
	
