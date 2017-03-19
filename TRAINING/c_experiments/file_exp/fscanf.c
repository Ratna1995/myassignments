#include<stdio.h>
#include<stdlib.h>

#ifdef ex1
int main()
{
	FILE *fp;
	char buf[50];
	char buf1[50];
	char buf2[50];

	int res;

	fp = fopen("count.txt", "a");

	res = fscanf(stdin, "%s %s %s", buf, buf1, buf2);

	//printf("%d\n", res);
	//printf("%s\n", buf);
	//printf("%s\n", buf1);
	//printf("%s\n", buf2);

	fprintf(fp,"%s %s %s", buf, buf1, buf2);
	return 0;
}
#endif

#ifdef ex2

int main()
{
	char str1[10], str2[10], str3[10];
	int year;
	FILE * fp;

	fp = fopen ("file.txt", "w+");
	fputs("We are in 2012", fp);
				      
	rewind(fp);
	fscanf(fp, "%s %s %s %d", str1, str2, str3, &year);
						    
	printf("Read String1 |%s|\n", str1 );
	printf("Read String2 |%s|\n", str2 );
	printf("Read String3 |%s|\n", str3 );
	printf("Read Integer |%d|\n", year );

	fclose(fp);
										   
	return(0);
}
#endif
