#include"header.h"

int validation(char *ch)
{
	int i = 0;

	for(i = 0; i < strleng(ch); i++){
	if((*(ch + i) >= '0' && *(ch + i) <= '9') || (*(ch + i) >= 'A' && *(ch + i) <= 'Z') || (*(ch + i) >= 'a' && *(ch + i) <= 'z') || (*(ch + i) == 32)){
		if(*(ch + 0) == 32 || (*(ch + i) == 32 && *(ch + i + 1) == 32 ))
			break;			
		}
	else
		return 0;
	}

    if(*(ch + i + 1) == '\0')                                                                                                 
    	return 1;
	else
		return 0;
}    
