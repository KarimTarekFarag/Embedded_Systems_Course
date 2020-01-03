#include <stdio.h>
void main(void)
{
 int n,i=0;
 printf("please enter a number to display it's multiplication table:");
 scanf("%d",&n);
 
 while (i!=10)
 {
	 printf("%d x %d = %d\n",n,i+1, n*(i+1) );
	 i++;
 
 }
  


}