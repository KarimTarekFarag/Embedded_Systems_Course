#include<stdio.h>

// function declaration
int add(int x,int y);
int sub(int x,int y);
int mult(int x,int y);
int div(int x,int y);
int and(int x,int y);
int or(int x,int y);
int not(int x);
int xor(int x,int y);
int rem(int x,int y);
int inc(int x);
int dec(int x);

void main(void)
{ 
	int ID,x,y;

	printf("Please enter the operation ID: ");
	scanf("%d",&ID);
  
	
	switch(ID)
	{
	
	case 1:
	 printf("Please enter the operands: ");
	 scanf("%d%d",&x,&y);
	   printf("the result is: %d",add(x,y));
	   break;
	case 2:
	 printf("Please enter the operands: ");
	scanf("%d%d",&x,&y);
	   printf("the result is: %d",sub(x,y));
	  break; 
	  case 3:
	 printf("Please enter the operands: ");
	 scanf("%d%d",&x,&y);
	   printf("the result is: %d",mult(x,y));
	   break;
	case 4:
	 printf("Please enter the operands: ");
	scanf("%d%d",&x,&y);
	   printf("the result is: %d",div(x,y));
	  break; 
	  case 5:
	 printf("Please enter the operands: ");
	 scanf("%d%d",&x,&y);
	   printf("the result is: %d",and(x,y));
	   break;
	case 6:
	 printf("Please enter the operands: ");
	scanf("%d%d",&x,&y);
	   printf("the result is: %d",or(x,y));
	  break; 
	  case 7:
	 printf("Please enter the operands: ");
	 scanf("%d%d",&x);
	   printf("the result is: %d",not(x));
	   break;
	case 8:
	 printf("Please enter the operands: ");
	scanf("%d%d",&x,&y);
	   printf("the result is: %d",xor(x,y));
	  break;
	  case 9:
	 printf("Please enter the operands: ");
	 scanf("%d%d",&x,&y);
	   printf("the result is: %d",rem(x,y));
	   break;
	case 10:
	 printf("Please enter the operand: ");
	 scanf("%d%d",&x);
	   printf("the result is: %d",inc(x));
	  break; 
	  case 11:
	 printf("Please enter the operand: ");
	scanf("%d%d",&x);
	   printf("the result is: %d",dec(x));
	  break; 
	  
	    default: printf("you haven't entered a correct ID");
	
	}
}

int add(int x,int y)
{
	
	return x+y;
}

int sub(int x,int y)
{
	return x-y;
}

int mult(int x,int y)
{
	
	return x*y;
}

int div(int x,int y)
{
	
	return x/y;
}

int and(int x,int y)
{
	
	return x&y;
}

int or(int x,int y)
{
	
	return x|y;
}

int not(int x)
{
	
	return ~x;
}

int xor(int x,int y)
{
	
	return x^y;
}

int rem(int x,int y)
{
	
	return x%y;
}

int inc(int x)
{
	
	return x++;
}

int dec(int x)
{
	
	return x--;
}


















