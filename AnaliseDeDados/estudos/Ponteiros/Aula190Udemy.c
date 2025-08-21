#include <stdio.h>
#include <stdlib.h>

int main(){ // Por que não usamos & ao ler uma string com a função scanf ?

char frase [100];
char *p;

printf("\n\t Digite uma frase\n");

scanf("%100[^\n]",frase);

printf("\tFrase digitida: %s\n",frase);

printf("\tfrase:\t\t%p\n",frase);
printf("\t&frase:\t\t%p\n",&frase);
printf("\t&frase[0]:\t%p\n",&frase[0]);
printf("\t&frase[0]:\t%p\n",&frase[1]);

p = frase;


return 0;

}