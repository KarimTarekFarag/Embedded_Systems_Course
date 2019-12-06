#include<stdio.h>

// function declaration

int get_max(int num1,int num2, int num3, int num4);
int get_min(int num1,int num2, int num3, int num4);


void main(void)
{
	
	int num1, num2, num3, num4, maximum, minimum;
  printf("Please enter 4 numbers: ");
  scanf("%d%d%d%d",&num1,&num2,&num3,&num4);

  
  maximum = get_max(num1,num2,num3,num4);
  minimum = get_min(num1,num2,num3,num4);
   printf("The maximum number is: %d\n",maximum);
   printf("\nThe minimum number is: %d\n",minimum);

}

int get_max(int num1,int num2, int num3, int num4)
{
	   if((num1>num2) && (num1>num3) && (num1>num4))
         return num1;
    else if((num2>num1) && (num2>num3) && (num2>num4))
        return num2;
    else if((num3>num2) && (num3>num1) && (num3>num4))
       return num3;
    else if((num4>num2) && (num4>num3) && (num4>num1))
       return num4; 
}

int get_min(int num1,int num2, int num3, int num4)
{
	 if((num1<num2) && (num1<num3) && (num1<num4))
        return num1;
    else if((num2<num1) && (num2<num3) && (num2<num4))
        return num2;
    else if((num3<num2) && (num3<num1) && (num3<num4))
        return num3;
    else if((num4<num2) && (num4<num3) && (num4<num1))
        return num4;
}
