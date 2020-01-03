#include<stdio.h>

void main(void)
{

   int i=0;
   int x=0;
   int sum=0;
   float average=0;
   
    printf("Please enter 10 numbers:\n");

   for (i=0;i<10;i++)
   {
   printf("Number -%d:",i);
   scanf("%d",&x);
   sum = sum+x;
   
   }
     printf("the sum of the 10 numbers is: %d\n",sum);
	 average=sum/10.0;
	 printf("the average is: %0.2f", average);


}