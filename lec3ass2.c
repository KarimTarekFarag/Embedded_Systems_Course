#include<stdio.h>
void main(void)
{
	
	int ID,pass,count,flag=0;
	printf("Please enter your ID: ");
	scanf("%d",&ID);
	
	switch(ID)
	{
		case 1234: printf("please enter your password: ");
		 
		 for(count=0;count<3;count++)
		 {
			  scanf ("%d",&pass);
					   if(pass == 7788)
					   {
						   printf("Welcome Ahmed");
						   flag=1;
						   break;
					   }
					   else if(count<2)
					   {
						   printf("please try again:  ");			 
					   }	 
			 
		 }
		 break;
		 
		 case 5678: printf("please enter your password: ");
		 
		 for(count=0;count<3;count++)
		 {
			  scanf ("%d",&pass);
					   if(pass == 5566)
					   {
						   printf("Welcome Amr");
						   flag=1;
						   break;
					   }
					   else if(count<2)
					   {
						   printf("please try again:  ");			 
					   }	 
			 
		 }
		 break;
		 
		  case 9870: printf("please enter your password: ");
		 
		 for(count=0;count<3;count++)
		 {
			  scanf ("%d",&pass);
					   if(pass == 1122)
					   {
						   printf("Welcome Wael");
						   flag=1;
						   break;
					   }
					   else if(count<2)
					   {
						   printf("please try again:  ");			 
					   }	 
			 
		 }
		 break;
		
		  default: printf("You are not registered");

		

		
		
	}
	
	if (flag==0)
	{
		printf("No more tries");
	}
	
}