#include <stdio.h>
#include "asm.h"

int *ptrvec;
int *ptrFinal;
int num;

int main(void){
	
	printf("Insira o número de elementos do vetor: ");
	scanf("%d", &num);
	
	int vec[num];
	int vecFinal[num];
	int i;

	
	for(i=0; i<num; i++){
		printf("Valor da %dª posição: ", (i+1));
		scanf("%d", &vec[i]);
	}
       	ptrvec = vec;
	ptrFinal=vecFinal;

	printf("\nVetor inicial: {");
	for(i=0; i<num; i++){
	  printf("  %d ", vec[i]);
	}
	printf("}");
	sort_without_reps();
	printf("\nVetor final:   {");
	for(i=0; i<num; i++){
	  printf("  %d ", vec[i]);
	}
	printf("}\n");

	
	
	
	
	return 0;
}
