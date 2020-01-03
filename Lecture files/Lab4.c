#include<stdio.h> 
#include<stdlib.h> 

void main(void)
{
	// this is an extra program to see what is the value of the number in binary
	int a =0; 
	int b =0;
	int c;
	int k;
	int c1;
	int k1;
	printf("enter the value of a :");
	scanf("%d",&a);
	printf("enter the value of b :");
	scanf("%d",&b);
	
	printf("%d in binary is:\n", a);


	 for (c = 12; c >= 0; c--)
  {
    k = a >> c;

    if (k & 1)
      printf("1");
    else
      printf("0");
  }
  
   printf("\n%d in binary is:\n", b);


	 for (c1 = 12; c1 >= 0; c1--)
  {
    k1 = b >> c1;

    if (k1 & 1)
      printf("1");
    else
      printf("0");
  }
  
	// here starts the assignment
	printf("a+b= %d\n",a+b);
	printf("a-b= %d\n",a-b);
	printf("a&b= %d\n",a&b);
	printf("a|b= %d\n",a|b);
	printf("a^b= %d\n",a^b);


	

	
}