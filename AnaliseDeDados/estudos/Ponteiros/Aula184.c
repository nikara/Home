/*
          Aula 184: O que é e como criar um ponteiro?
          Curso: Programando seu futuro
          
*/

#include <stdio.h>

int main(){

	// Declarar variaveis dessa maneira, estamos alocando valor a um espaço na memoria
	int num = 10;
	char string = 'f';
	
	printf("Valor de num: %d\n", num); // imprime o conteudo da memoria
	
	printf("Endereco de num: %p\n", &num); // imprime o endereço da memoria
	
	// O endereço de memoria são representados em hexadecimal
	// Cada variavel possui um endereço de memoria unico
	
	// Oque um ponteiro
	// Uma variavel do tipo ponteiro armazena um endereço de memória
	// ponteiros podem ser de qualquer tipo de dado
	
	// Como declarar um ponteiro
	int *p;
	char *f;
	
	// Como instanciar um ponteiro
	
	// Atribuição errada, ponteiros so guardando endereço de memoria.
	p = num;
	// Atribuição correta
	p = &num;
	
	printf("Valor de p: %p\n", p); // Imprime o endereço da memoria
	printf("Valor apontado por p: %d\n", *p); // Imprime o valor apontado na memoria
	
	return 0;
}