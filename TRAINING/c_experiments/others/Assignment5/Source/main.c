#include<stdio.h>
#include<stdlib.h>

#include "../Header/fileheader.h"

# define MAX 256


int main(int argc, char *argv[])
{
	char choice;
	char c;
	char str[MAX];
	int num;

	do {
		system("clear");
		printf("1.Uppercase to Lowercase\n2.Search a String\n3.Remove comments\n");
		printf("4.Count number of words in text file\n5.Write structure to file\n");
		printf("6.Read from file\n");
		choice = fgetc(stdin) - 48;
		getchar();
		switch(choice)
		{
			case 1 :
				printf("file : %s", argv[1]);
				upper_to_lower(argv[1]);
				break;

			case 2 :
				printf("Enter string to search : ");
				fgets(str, MAX, stdin);
				num = search_string(str);
				if(num == 0) {
					printf("String not found\n");
				} else {
					printf("string found.!!!\nLine no is : %d\n", num);
				}
				break;
			case 3 :
				rem_comments();
				break;

			case 4 : 
				printf("Total number of words : %d\n", count_words(argv[1]));
				break;

			case 5 : 
				accept_struct();
				break;

			case 6 :
				read_struct();
				break;

			default :
				printf("Wrong choice \n");
				break;
		}
		printf("Do you want to continue : (y / Y) : ");
		c = fgetc(stdin);
		getchar();
	}while(c == 'y' || c == 'Y');

	return 0;
}
