#include <stdio.h>
#include "asm.h"

char str1 [] = "Arr0z com batatas é uma beldade";
char* ptr1=str1;



int main(void) {
  int num=0;
  ptr1 = str1 ;
  printf("String incial: %s\n",str1);
  num=encrypt();
  printf("String final: %s\n Numero carateres alterados: %d\n",str1,num);
 
  return 0;
}
