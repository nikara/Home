#include <stdio.h>
#include <stdlib.h>

void multiplicar (int v[], int tam){
	int i;
	
	for(i = 0; i < tam; i++){
		v[i] = v[i] * 2;
	}
}

void imprimir (int *v, int tam){
	int i;
	
	printf("\n\t%d\n",*v);
	
	for(i = 0; i < tam; i++){
		printf("%d ", v[i]);
	}
}

int main(){
	int vet[5] = {1,2,3,4,5};
	printf("antes de multiplicar:\n");
	imprimir(vet, 5);
	multiplicar(vet,5);
	printf("depois de multiplicar:\n");
	imprimir(vet,5);
	
	return 0;
}