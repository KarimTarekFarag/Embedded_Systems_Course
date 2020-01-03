#include <stdio.h>
#include "LIB_StdTypes.h"

typedef struct 
{
	u16 salary;
	u16 bonus;
	u16 deduction;
	
}employee;

	employee ahmed, amr, waleed;

void main(void)
{
	
	 u16 total=0;
	
	 printf("Please enter ahmed's salary: ");
	 scanf("%d",&ahmed.salary);
	  printf("Please enter ahmed's bonus: ");
	 scanf("%d",&ahmed.bonus);
	  printf("Please enter ahmed's deduction: ");
	 scanf("%d",&ahmed.deduction);
	 
	   printf("Please enter amr's salary: ");
	 scanf("%d",&amr.salary);
	  printf("Please enter amr's bonus: ");
	 scanf("%d",&amr.bonus);
	  printf("Please enter amr's deduction: ");
	 scanf("%d",&amr.deduction);
	 
	    printf("Please enter waleed's salary: ");
	 scanf("%d",&waleed.salary);
	  printf("Please enter waleed's bonus: ");
	 scanf("%d",&waleed.bonus);
	  printf("Please enter waleed's deduction: ");
	 scanf("%d",&waleed.deduction);
	 
 total = (ahmed.salary + amr.salary + waleed.salary + ahmed.bonus + amr.bonus + waleed.bonus - ahmed.deduction - amr.deduction - waleed.deduction);
	
	printf("Total Value Needed is %d",total);
	 
	 
	 
}
