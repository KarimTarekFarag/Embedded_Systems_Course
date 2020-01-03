#include <stdio.h>


void main()
 {

int x=10;

printf("x before change is %d\n",x);

//////////////////////

int* ptr;

ptr =&x;

*ptr = 20;

printf("x after change is %d",x);



 
	 
	


}