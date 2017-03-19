#include"header.h"

double atofloat(char *s)
{
	int i = 0;
	double value;
	int sign;
	double power, power2 = 0;

	for(value = 0.0; s[i] >= '0' && s[i] <= '9'; i++){
		value = 10.0 * value + (s[i] - '0');
	}

	if(s[i] == '.')
		i++;

	for(power = 1.0; s[i] >= '0' && s[i] <= '9'; i++){
		value = 10.0 * value + (s[i] - '0');
		power *= 10.0;
	}

	value = value / power;

	if (s[i] == 'e' || s[i] == 'E')
		i++;

	if(s[i] == '-'){
		sign = s[i];
		i++;
		printf("sign = %c\n", sign);
	}

	if(s[i] >= '0' && s[i] <= '9'){
		power2 = pow(10, (s[i]-'0'));
	printf("power = %lf\n", power2);
	}

	if(sign == '-'){
		value = value / power2;
		printf("value = %lf\n", value);
		return value;
	}
	else{
		value = value * power2;
		printf("value = %lf\n", value);
		return value;
	}
}


