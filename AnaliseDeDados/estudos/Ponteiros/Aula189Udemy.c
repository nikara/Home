#include <stdio.h>
#include <stdlib.h>

int main(){ // Qual o tamanho de um ponteiro na linguagem C ?

int idade = 30;
char sexo = 'f';
float altura;
double al;

int *pi = &idade;
char *ps = &sexo;
float *paf = &altura;
double *pad = &al;

printf("\n\t char:%d\n", sizeof sexo);
printf("\n\t int: %d\n",sizeof idade);
printf("\n\t float: %d\n",sizeof altura);
printf("\n\t double: %d\n",sizeof al);

printf("\n\t char:%d\n", sizeof pi);
printf("\n\t int: %d\n",sizeof ps);
printf("\n\t float: %d\n",sizeof paf);
printf("\n\t double: %d\n",sizeof pad);

return 0;
}