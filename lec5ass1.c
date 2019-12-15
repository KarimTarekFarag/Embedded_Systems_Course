#include <stdio.h>

void main(void)
{
	int array[10];
	int size = 10;
	int i,j,z;


	for (i=0;i<10;i++)
	{
		printf("Please Enter number %d:  ",i);
		scanf ("%d",&array[i]);
	}

	for (i=0; i<size-1;i++)
	{
		 for (j = 0; j < size-i-1; j++) 
		{
			if(array[j] > array[j+1])
			{
				
				z = array[j+1];
				array[j+1] = array[j];
				array[j] = z;
			}
		}
	}
printf("The maximum value is: %d\n",array[0]);
printf("The minimum value is: %d",array[size-1]);


}