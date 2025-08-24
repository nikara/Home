#include <stdio.h>
#include <stdlib.h>

void imprimir(int *idade){
	printf("\n\tIdade 1: %d\n",*idade);
	*idade = 10;
	printf("\n\tIdade 2: %d\n",*idade);
}

int main(){ // Ponteiro como parâmetro para uma função ou procedimento


int idade = 40;

imprimir(&idade);

printf("\n\tIdade em main: %d\n",idade);



return 0;
	
}
