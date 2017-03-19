#include "header1.h" 

int strsp(char *sbuf, char *dbuf)
{ 
	int j=0;  
    int i=0;	

	/*iterates until the end of strings sbuf and dbuf*/
	while( (*(dbuf+j+1) != '\0') && (*(sbuf+i+1) != '\0')){
		if(*(sbuf+i) == *(dbuf+j)){
		/* checks if character in sbuf is equal to dbuf*/
			i++;
			j++;
		}
		else{
			j++;
			if(i != 0){
				j = (j-i);
				i=0;
			}
		}
	}

	return i; 
}
