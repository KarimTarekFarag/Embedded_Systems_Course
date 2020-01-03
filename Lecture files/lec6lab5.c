#include <stdio.h>
int mult(int *ptr1,int*ptr2);



void main (void)
{
	int arr1[4]={1,2,3,4};
	int arr2[4]={2,3,4,5};
    int *ptr1=arr1;
	int *ptr2=arr2;
	int result = mult( ptr1, ptr2);
	printf("The result of scalar multiplication of the elements in the array is:  %d",result);
}


int mult(int *ptr1,int*ptr2)
{
	int sum = 0;
	int i;
	
	for (i=0;i<4;i++)
	{
		sum += ptr1[i] * ptr2[i];
	}
	
	return sum;
}