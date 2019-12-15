#include <stdio.h>

void main(void)
{
	
	int passed,failed,max,sum=0;
	int min=100;
	int i,j;
	
	int school[3][10]=
	{
		{60,80,40,90,100,70,40,90,29,67},
		{30,90,80,99,55,45,23,77,55,88},
		{30,90,80,99,55,60,80,40,90,100}
	};
	
	for ( i =0 ; i < 3 ; i++)
	{
		for (j=0 ; j<10 ; j++)
		{
		 if (school[i][j]>=50){ passed++;} else {failed++;}
		}
	}
	
	for ( i =0 ; i < 3 ; i++)
	{
		for (j=0 ; j<10 ; j++)
		{
		if (school[i][j]<min)
		{
			min=school[i][j];
		}
		if (school[i][j]>max)
		{
			max=school[i][j];
		}
		}
	}
	
	for ( i =0 ; i < 3 ; i++)
	{
		for (j=0 ; j<10 ; j++)
		{
        sum = sum + school[i][j];
		}
	}
	
	

	printf("\nNumber of passed students = %d \n",passed);
	printf("Number of failed students = %d \n",failed);
	printf("Highest grade = %d \n",max);
	printf("Lowest grade = %d \n",min);
	printf("Average grade = %d \n",sum/30);
	



}