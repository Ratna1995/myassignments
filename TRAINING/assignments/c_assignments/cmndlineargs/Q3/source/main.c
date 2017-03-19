#include"header.h"

int main(int argc, char *argv[])
{
	int num1;	//1st number to be given
	int num2;	// 2nd number to be given
	
	if(argc == 4) {
	/*function pointer to implement simple calculator*/
	void (*fun_to_calc[])(int, int) = {add, sub, mul, div};

	num1 = atoint(argv[2]);	//validation of num1
	num2 = atoint(argv[3]);	//validation of num2

	if(!strgcmp("add",argv[1]))	// compares add with argument 1
		(*fun_to_calc[0])(num1, num2);// if equal, addition is performed
	
	else if(!strgcmp("sub",argv[1])) // compares sub with argument 1           
        (*fun_to_calc[1])(num1, num2); //if equal, substraction is performed

	else if(!strgcmp("mul",argv[1]))	//compares mul with argument 1       
        (*fun_to_calc[2])(num1, num2); //if equal, multiplication is done

	else if(!strgcmp("div",argv[1]))  // compares div with argument 1          
        (*fun_to_calc[3])(num1, num2); //if equal, divison is done
	}
	else
		printf("no sufficient command line arguments\n");
	return 0;
}

