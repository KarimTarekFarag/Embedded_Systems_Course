#include <stdio.h>


void main(void)
{
	const int count=10;
	int values[10];
	int i;
	int sum,average;
	
	for (i=0;i<=10-1;i++)
	{
	printf("Please enter number %d: ",i);
	scanf("%d",&values[i]);
	sum += values[i];
	average=sum/10;
	}
	
	
	printf("the sum is %d \n", sum);
	
	printf("the average is %d",average);
	
}