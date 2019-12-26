#include <stdio.h>

void main(void)
{
	int array[10];
	int i;
	int n;
	int flag=0;
	int count = 0;
	
	for (i=0;i<10;i++)
	{
		printf("Pleae Enter number %d: ",i);
		scanf("%d",&array[i]);
	}
	
	printf("Please Enter a number to check if it exists: ");
	scanf("%d",&n);
	
	for (i=0;i<10;i++)
	{
		if (array[i] == n)
		{
			count ++;	
			flag =1;
		}
	}
	if (flag==1)
	{
	printf("The number exist %d times",count);
	}
	else if (flag==0)
	{
    printf("value doesn't exist");

	}
	
}