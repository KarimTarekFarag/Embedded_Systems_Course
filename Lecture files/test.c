#include <stdio.h>

#include "LIB_StdTypes.h"

#define x 40


int main(void){
#if x>10 
printf("Ahmed");
#elif x<10
printf("Gemy");
#endif
return 0;
}