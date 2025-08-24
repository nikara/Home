#include <stdio.h>
#include <stdlib.h>

void imprimir(int *v, int tam) {
	int i;
	printf("\n\t");
	for(i = 0; i < tam; i++){
		printf("\n%d", *(v+i));
	}
}



int main(){ // Entendendo aritmética de ponteiros com vetor

int vet[9] = {10,20,30,40,50,60,70,80,90};

imprimir (vet,9);


//printf("\n\t 0 = %d\n", *vet);
//printf("\n\t 1 = %d\n", *(vet + 1));
//printf("\n\t 2 = %d\n", *(vet + 2));


return 0;
	
}