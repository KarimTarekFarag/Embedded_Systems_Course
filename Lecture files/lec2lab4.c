#include<stdio.h> 
#include<stdlib.h> 

void main(void)
{
  int x=0;
    printf("Please enter your grade: ");
	scanf("%d",&x);
	
	 if((85<=x)&&(x<100))
	{
		printf("Excellent");
		
    }
	else if((75<=x)&&(x<85))
	{
		printf("Very good");
		
    }
	else if((65<=x)&&(x<75))
	{
		printf("Good");
		
    }
	else if((50<=x)&&(x<65))
	{
		printf("Normal");
		
    }
else if (0<=x<50)
	{
		printf("Failed");
		
	}
	
	
	


	

}