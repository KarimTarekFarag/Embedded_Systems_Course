#include<stdio.h>
void main(void)
{
	int n,row,space,star;
   
  printf("Enter the number of rows in pyramid:\n");
  scanf("%d", &n); 
  
  //n= total number of rows
  
  
for(row=1;row<=n;row++) // to print rows
{
	//print space
	for(space=1;space<=n-row;space++)
	{
			printf(" ");
	}
	//print star
	for(star=1;star<=(2*row)-1;star++)
	{
			printf("*");
	}
	
	
	printf("\n");
}
  
	
}