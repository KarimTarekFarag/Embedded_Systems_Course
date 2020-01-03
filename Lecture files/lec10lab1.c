#include <stdio.h>
#include <stdlib.h>
#include "LIB_StdTypes.h"

void main(void)
{
	u8*ptr;
	u8 size;
	//u8 array[size];
	//u8 size = 10;
	u8 i,j,z;
	
	
 printf("please enter the number of values:");
 scanf("%d",&size);

  
    ptr = (u8*)malloc(size);
	
 // I cannot use array with a magic number, either malloc or preproccesor define.
/**************************** Scan the Values *************************/	
	/* Scan the values loop */
	for (i=0;i<size;i++)
	{
		printf("Please Enter number %d:  ",i);
		scanf ("%d",&ptr[i]);
	}
/**********************************************************************/


/**************** Sort the Values using bubble sorting ****************/	
	/* Sort the values using Bubble sorting */
	for (i=0; i<size-1;i++)
	{
		 for (j = 0; j < size-i-1; j++) 
		{
			if(ptr[j] > ptr[j+1])
			{
				/* Swap */
				z = ptr[j+1];
				ptr[j+1] = ptr[j];
				ptr[j] = z;
			}
		}
	}
	/* Print the values after sorting */
	printf("Values after sorting are:\n");
	for (i=0;i<size;i++)
	{
		printf("%d\n",ptr[i]);
	}
}

