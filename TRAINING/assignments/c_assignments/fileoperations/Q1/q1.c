#include<stdio.h>
#include<stdlib.h>

/*function prototype to convert upper case letters to lower case*/
void up_to_low(char *);

int main(int argc, char *argv[])
{
	FILE *fp;	//file pointer
	char *str = NULL;	//string

	/* allocates memory for string*/
	if(NULL == (str = (char *) malloc (sizeof(char) * 50))) {
		printf("can't allocate memory");
		exit(0);
	}
	
	/* if argument count is equal to 2*/	
	if(argc == 2){
		/* opens a file for reading and writing to a file*/
		if(NULL == (fp = fopen(argv[1], "r+"))) {
			perror("can't open file");
			exit(0);
		}

		if(NULL == (fgets(str, 100, fp))) {
			printf("fgets failed");
			exit(EXIT_FAILURE);
		}
	
		up_to_low(str); //function call to convert uppercase to lowercase
		printf("%s",str);
		rewind(fp);	//moves fp to the start
		
		/* writes the converted string into the file*/
		if(!(fprintf(fp,"%s",str))) {	
			printf("fprintf failed");
			exit(0);
		}

	}
	else
		printf("argument count is less than 2");
	return 0;
}

/*function definition to convert uppercase letters to lowercase*/
void up_to_low(char *str)
{
	int i = 0;	//index

	/*iterates until the end of string*/
	while(*(str + i) != '\0') {
		if((*(str + i) >= 65) && (*(str + i) <= 90)) 
			*(str + i) = *(str + i) + 32;
		i++;
		
	}
}

