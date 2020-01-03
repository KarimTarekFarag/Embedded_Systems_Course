#include<stdio.h> 

void main(void)
{
	
	
	int h;
	float s;
	printf("Please enter your working hours:");
	scanf("%d",&h);
	
	s = h*50;
	
	
	if(h<40)
	{
	 s = s*0.9;
	}

		printf("the salary is:%0.2f",s);


	 
}