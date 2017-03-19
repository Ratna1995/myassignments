#include <stdio.h>
#define MAX_LEN 64

int validate(char input_string[])
{ 
	int i;
	int count=0;
	int act=1;
	int result=0;
 /* print the string by printing each element of the array */
     	for(i=0; input_string[i] != 10; ++i){ // \0 = 10 = new line feed //the number in each digits can be only 0-9.[ASCII 48-57]
		if(i==0 || i==1){
			if(input_string[0]==43||input_string[1]==46){
				(input_string[0]==43)?result=input_string[i]-48:1;
				(input_string[1]==46)?count++:1;
				//(input_string[0]==45)?result=(input_string[i]-48):1;
	
				continue;
			}
		}
	
		if (input_string[i]  >= 48 && input_string[i] <= 57){
             		result=result*10+input_string[i]-'0';
			continue;
		}
 		else{ //must include newline feed  
		act = 0; //0
               	break;
        	}
       
 	}
	
	if(input_string[0]==43 && input_string[1]==46)
		result=result*0;
/*	if(input_string[0]==45)
		result=result*-1;*/
//	printf("result=%d\n",result);
    	if (act == 0){
      	 //	printf("\nINVALID INPUT"); 
		return 0;
	}
    	else{
       	//printf("\nTHIS IS INTEGER");
	return result;
	}
    //return 0;
}     

/*int main()
{

        char input_string[MAX_LEN];  character array to store the string 
	int result=0;

        printf("Enter a string:\n");
        fgets(input_string,sizeof(input_string),stdin);   read the string 

        puts(input_string);

	result=validate(input_string);
	
	printf("result=%d\n",result);
	return 0;
}
               */
