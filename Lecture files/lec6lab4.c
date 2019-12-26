#include <stdio.h>



void main (void)
{
	int arr[5]={1,2,3,4,5};
	int sum=0;
	int i;
	int* ptr=arr;
	
	for (i=0;i<=5;i++)
	{
		sum+=*ptr; // the sum of dereferencing the address each time. 
		printf("value pointed to is: %d\n",*ptr);
		printf("The sum is: %d\n",sum);

		
		ptr++;
		printf("ptr is: %p\n",ptr);
	}
	
	printf("The sum of the elements in the array is:  %d\n",sum);

}


