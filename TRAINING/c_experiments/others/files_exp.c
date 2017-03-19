#include<stdio.h>
#if 0
int main()
{
	int a = 0;
	FILE *fp;
	char str[] = "venkat nallamlli";
	char str1[100];
	char str2[40];
	fp = fopen("demo1.txt","a+");
	printf("\n%p",fp);
	printf("\n%p",&a);
	//printf("\nsize of str1 = %d",sizeof(str));;
	fwrite(str,sizeof(str),sizeof(char),fp);
	rewind(fp);
	fread(str1,24,sizeof(char),fp);
	fread(str2,30,sizeof(char),fp);
	printf("%s",str1);
	printf("\n%s",str2);
	printf("\n");
	fclose(fp);
	return 0;
}



#endif

#if 0

int main(int argc, char *argv[])
{
	char c;
	FILE *f;
	printf("%d\n",argc);
	/*f = fopen(argv[1],"r");
	while(c != EOF) 
	{
		c = getc(f);
		printf("%d ",c);
	}
	fclose(f);*/

	return 0;
}

#endif

#if 0

int main()
{
	FILE *fp1;
	FILE *fp2;
	char str[] = "hai im venkat nallamalli";

	fp1 = fopen("f1.txt","a+");
	fp2 = fopen("f2.txt","a+");

	fwrite(str,sizeof(str),sizeof(char),fp1);
	fprintf(fp2,"%s",str);
	
	fclose(fp1);
	fclose(fp2);
	
	return 0;
}

#endif

#if 0

int main()
{
	int a;
	int b;
	
	scanf("%d %d",&a,&b);
	printf("%d %d",a,b);
	return 0;
}

#endif

#if 0
int main()                                                                      
{                                                                               
    int a;                                                                      
    int b;                                                                      
        
	FILE *f;
	
                                                                        
    scanf("%d %d",&a,&b);                                                       
    printf("%d %d",a,b);                                                        
    return 0;                                                                   
}                                                                               
                                                                                
#endif 


#if 0

int main(int argc, char *argv[])
{
	int a = 10;

#endif

#if 0

int main()
{

	char *a = "hello";
	printf("%s",*a);
	return 0;
}

#endif


#if 0

int main()
{
	union a {
	int a;
	char b;
} c;

	c.a = 256;
	c.b = c.a;
	if(!(c.b))
		printf("little Endian");
	else
		printf("Big Endian");
}
	return 0;
}

#endif

#if 1

int main()
{
	int a = 256;
	FILE *fp;
	
	fp = fopen("test.txt", "r+");
	fwrite(&a, sizeof(a), 1, fp);
	rewind(fp);
	
	fread(&a, sizeof(char), 1, fp);
	printf("%d", a);
	return 0;
}
#endif	
