#include <stdio.h>
void main(void)
{
  
    int n;
    int factorial = 1;
	
    printf("Enter an integer: ");
    scanf("%d",&n);
  
	do
    {
		
            factorial *= n;  
            n --;    
			
    }
    
	while(n>0);
	
   printf("Factorial is :%d",factorial);

	
}
  
