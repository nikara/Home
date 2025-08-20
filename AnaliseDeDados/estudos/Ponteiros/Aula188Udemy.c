#include <stdio.h>
#include <stdlib.h>

int main(){ // O que é e como criar um ponteiro na linguagem C ?

int idade = 30;
char sexo = 'f';

int *pi = &idade;
char *ps = &sexo;

printf("\n\t %d\n", sizeof sexo);

printf("\n\tEndereco de idade: %p\tidade: %d\n", &idade, idade);
printf("\tEndereco de sexo: %p\tSexo: %c\n", &sexo,sexo);

printf("\n\tEndereco de pi: %p\tConteudo de pi: %p\t Cont.apontado por pi: %d\n", &pi, pi, *pi);
printf("\n\tEndereco de ps: %p\tConteudo de ps: %p\t Cont.apontadp por ps: %c\n",&ps, ps,*ps);
	
}