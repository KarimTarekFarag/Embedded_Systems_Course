#include <stdio.h>
#include "LIB_StdTypes.h"


#pragma pack(1)
typedef struct 
{	u8 x;
	u16 y;
	u8 z;
}tstrx;

#pragma pack()
void main(void)
{
	printf("= %d bytes",sizeof(tstrx));  
}
