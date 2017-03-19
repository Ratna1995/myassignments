#include "header1.h" 

char *rmstr(char *sbuf,char *dbuf)
{ 
	/* indexes */
	int j=0;  
    int i=0;
	int k=0;
	int x=0;

	/* statements used to remove characters of dbuf from sbuf*/
	while( *(sbuf+i+1) !='\0'){
		while((*(dbuf+j) == *(sbuf+i)) && (*(dbuf+j+1) != '\0')){
			i++;
			j++;
		}
		if (j == str_len(dbuf)){
			j=0;
		}
		if (j > 0 && j < str_len(dbuf)){
			x=i;
			i = i-j;
			while(i < x){
				*(sbuf+k)=*(sbuf+i);
				i++;
				k++;					
			}
			j=0;
		}
		if((*(dbuf+j) != *(sbuf+i)))   {
			*(sbuf+k)=*(sbuf+i);		
			k++;
			i++;
		}
	}
	*(sbuf+k)='\0';
		
	return sbuf;	
}
