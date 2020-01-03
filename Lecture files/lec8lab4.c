#include <stdio.h>
#include "LIB_StdTypes.h"


//#pragma pack(1)
typedef struct 
{	u16 x;
	u32 y;
	u16 z;
	u32 k;
}mystruct;
//#pragma pack()
 
 
 

void main(void)
{
	printf("the size of the structure is: %d",sizeof(mystruct));
}
