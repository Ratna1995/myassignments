#include"header.h"

void strcopy(char *sbuf, char *dbuf)
{
	while( *sbuf ) 
	*dbuf++ = *sbuf++ ;
	dbuf = '\0';
}
