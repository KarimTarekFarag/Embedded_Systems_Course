#include <stdio.h>
void main(void)
{
 int answer;
 printf("please enter the result of 3x4:");
 scanf("%d",&answer);
 
 while (answer!=12)
 {
	 printf("Not correct, Please try again:");
	  scanf("%d",&answer);

 
 }
  
   printf("Thank you");

}