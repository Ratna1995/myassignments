#include<stdio.h>
#if 0
struct batch
{
	char b_id[5];
	char name[30];
	int emp_id;
};

int main()
{
	char a[5] = "vcen";
	int i;
	struct batch e1 = {"CR17", "ratna", 30851};
	struct batch e2 = {"cr16", "anku", 30445};

	e2.emp_id = 30;
	struct batch college[2];

	printf("enter the values\n");
	for(i = 0; i < 2; i++){
		scanf("%s", college[i].b_id);
		scanf("%s", college[i].name);
		scanf("%d", &college[i].emp_id);
	}
	printf("%s\n", college[1].b_id);
	printf("%s\n", college[1].name);
	printf("%d\n", college[1].emp_id);
	printf("%d\n", e2.emp_id);	
	printf("%d\n", sizeof(struct batch));
}		
#endif

#if 0
struct emp
{
	char b;
	int x;
};

int main()
{
	printf("%d\n", sizeof(struct emp));
	return 0;
}
#endif

#if 1

typedef struct structa_tag
{
   char        c;
   short int   s;
} structa_t;
 
// structure B
typedef struct structb_tag
{
   short int   s;
   char        c;
   int         i;
} structb_t;
 
// structure C
typedef struct structc_tag
{
   char        c;
   short int     d;
   char        s;
} structc_t;
 
// structure D
typedef struct structd_tag
{
   double d;
   int s;
   char c;
	int a;
	int ch[];
} structd_t;
 
int main()
{
   printf("sizeof(structa_t) = %d\n", sizeof(structa_t));
   printf("sizeof(structb_t) = %d\n", sizeof(structb_t));
   printf("sizeof(structc_t) = %d\n", sizeof(structc_t));
   printf("sizeof(structd_t) = %d\n", sizeof(structd_t));
 
   return 0;
}
#endif
