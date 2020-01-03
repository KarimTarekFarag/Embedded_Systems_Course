#include <stdio.h>

int add(int *x,int *y);

void main(void)
 {

int x,y,result;

printf("Please enter value 1: ");
scanf("%d",&x);

printf("Please enter value 2: ");
scanf("%d",&y);

result=add(&x,&y); // sending addresses to the function

printf("The result is: %d\n",result);
printf("x=%d y is %d",&x,&y);



}

int add(int *x,int *y)
{
	int z = *x+*y; //dereferencing addresses and adding the values
	
	return z;
}

