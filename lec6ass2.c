#include <stdio.h>


void main(void)
{
	
	int x=2,y=4,z=6;
	int*p=&x;
	int*q=&y;
	int*r=&z;
	
	
	printf("x=%d\n",x);
	printf("y=%d\n",y);
	printf("z=%d\n",z);
	
	printf("p=%p\n",p);
	printf("q=%p\n",q);
	printf("r=%p\n",r);
	
	printf("*p=%d\n",*p);
	printf("*q=%d\n",*q);
	printf("*r=%d\n",*r);


	printf("swapping pointers");
	
	r=p;
	p=q;
	q=r;
	
		
	printf("x=%d\n",x);
	printf("y=%d\n",y);
	printf("z=%d\n",z);
	
	printf("p=%p\n",p);
	printf("q=%p\n",q);
	printf("r=%p\n",r);
	
	printf("*p=%d\n",*p);
	printf("*q=%d\n",*q);
	printf("*r=%d\n",*r);

	
}