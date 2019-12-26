#include <stdio.h>
#include <stdlib.h> //used for malloc & free functions
int main(){
int n,i,*ptr,sum=0;
printf("Enter number of elements: ");
scanf("%d",&n);
ptr=(int*)malloc(n*sizeof(int)); //memory allocated using malloc
////assert(ptr==NULL); //check if memory is allocated or not
printf("Enter elements of array: ");
for(i=0;i<n;++i) {
scanf("%d",ptr+i);
sum+=*(ptr+i); }
printf("Sum=%d",sum);
free(ptr); //delete the dynamic allocated memory
return 0;
}