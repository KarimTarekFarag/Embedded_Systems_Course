#include<stdio.h> 
#include<stdlib.h> 

void main(void)
{
   int x; 
   int y; 
 printf("Please enter value X:");
 scanf("%d",&x);
 printf("\nPlease enter value Y:");
 scanf("%d",&y);
 
 if (x>y)
 {
	     printf("x>y \nThe True value is %d\nThe false value is %d",x>y,x<y);
 
 }
 else if(x==y)
 {
		 printf("x=y \nThe True value is %d\nThe false value is %d",x==y,x<y);
 
 }
 else
	     printf("x<y \nThe True value is %d\nThe false value is %d",x<y,x>y);




    

}