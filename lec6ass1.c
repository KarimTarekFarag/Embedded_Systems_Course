#include <stdio.h>

void bubble(int *ptr, int size);

void main(void)
{
	int array[10];
	int size = 10;
	int i;
	
	/* Scan the values loop */
	for (i=0;i<10;i++)
	{
		printf("Please Enter number %d:  ",i);
		scanf ("%d",&array[i]);
	}
	bubble(array,size);
	
	
	/* Print the values after sorting */
	printf("Values after sorting are:\n");
	for (i=0;i<10;i++)
	{
		printf("%d\n",array[i]);
	}
	
}


void bubble(int *ptr, int size)
{
		int i,j,z;

	for (i=0; i<size-1;i++)
	{
		 for (j = 0; j < size-i-1; j++) 
		{
			if(ptr[j] > ptr[j+1])
			{
				z = ptr[j+1];
				ptr[j+1] = ptr[j];
				ptr[j] = z;
			}
		}
	}
}
