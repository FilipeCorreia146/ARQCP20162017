#include <stdio.h>
#include "asm.h"


int main(void) {
  int num1=1,num2=2,num3=3;
  printf("Numeros %d, %d, %d\n", num1,num2,num3);
  printf("O maior numero é %d\n" , greater(num1,num2,num3));
  
  

 
  return 0;
}
