#include <stdio.h>

int main(){
	int numero;
	printf("digite um numero:");
	scanf("%d",&numero);
	printf("Voce digitou: %d\n",numero);
	printf ("Em ponteiro fica %p", &numero);
	return 0;
}