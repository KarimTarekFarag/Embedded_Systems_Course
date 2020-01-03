#include<stdio.h>


int Get_Max(void);
int Max;
void main(void)

{
	//int R;
	
	//R=Get_Max();
	
	printf("The maximum number is: %d",Get_Max());
   
}


int Get_Max(void)
{
	int x;
    int y;
	
	printf("Please enter the first number");
	scanf("%d",&x);
	printf("Please enter the second number");
	scanf("%d",&y);
	if (x>y)
	{
    Max=x;
	}
	else 
	{
    Max=y;
    }
      
	  return Max;
}