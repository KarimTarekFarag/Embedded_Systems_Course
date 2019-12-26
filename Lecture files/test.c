#include <stdio.h>
#include <stdlib.h>
#include "LIB_StdTypes.h"

struct dummy{
    u16 x; //2 bytes
	u32 y; //4 bytes
	u16 z; //2 bytes
	u32 k; //4 bytes
}d1;

void main(void)
{
	
	
	printf("%d",sizeof(d1));

	
}



