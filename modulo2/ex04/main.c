#include <stdio.h>
#include "operation.h"


int main(void){
	printf("Valor op1:");
	scanf("%d",&op1);
	printf("Valor op2:");
	scanf("%d",&op2);
	operation();
	printf("subtraction = %d:0x%x\n", res,res);
	return 0;
}
