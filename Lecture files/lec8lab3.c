#include <stdio.h>
#include "LIB_StdTypes.h"


#pragma pack(1)
typedef struct 
{	u8 math;
	u8 language;
	u8 physics;
	u8 chemistry;
}student;
#pragma pack()
 
 
 

void main(void)
{
	
	u8 ID;
	student arr[10]=
	{
		{100, 90, 80, 60},
		{70, 50, 67, 20},
		{67, 20, 80, 60},
		{100, 67, 67, 90},
		{88, 90, 20, 60},
		{100, 20, 88, 90},
		{20, 90, 80, 88},
		{50, 40, 90, 20},
		{56, 94, 45, 88},
		{80, 24, 54, 90},
	};
	
	printf("Please Enter Student ID: ");
	scanf ("%d",&ID);

	if (ID < 10)
	{
		printf("Math Grade: %d\n",arr[ID-1].math);
		printf("Language Grade: %d\n",arr[ID-1].language);
		printf("Math Grade: %d\n",arr[ID-1].physics);
		printf("Math Grade: %d",arr[ID-1].chemistry);
	}
	
	else
	{
		printf("Student ID is not correct");
	}
	
	
	
}
