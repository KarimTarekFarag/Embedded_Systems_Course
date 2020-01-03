#include <stdio.h>


void main(void)
{
	int values[10];
	int i;
	for (i=0;i<=9;i++)
	{
	printf("Please enter number %d  ",i);
	scanf("%d",&values[i]);
	}
	
	printf("\nthe values in reversed order are: \n");
	
	
	for (i=9;i>=0;i--)
	{
		printf("%d\n",values[i]);
	}
	
	
}