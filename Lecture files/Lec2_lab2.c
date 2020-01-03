#include<stdio.h>


void main (void)
{
//only using IF
int hours=0;
int salary = hours*50;

printf("please enter your working hours");

scanf("%d", hours);


if(hours<40)
{
	int salary = 0.9*salary;

}


printf("the salary is: %d", salary);

}