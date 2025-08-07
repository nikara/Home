// Estudo da função gets()

/*
A biblioteca C gets() a função é usada para ler uma linha do fluxo de entrada padrão (stdin) 
e armazene-o na string apontada por str. Continua lendo caracteres do fluxo de entrada 
até que um caractere de nova linha seja encontrado ou o fim do arquivo é alcançado. 
O caractere de nova linha é então substituído por um nulo terminador, e a string resultante é armazenada em str.

Sintaxe
A seguir está a sintaxe da biblioteca C do gets() função −

char *gets(char *str);

Parâmetros
Esta função aceita apenas um único parâmetro −

str: Ponteiro para a matriz de caracteres onde a string de entrada estará armazenado. 
Deve ter espaço suficiente para armazenar a string de entrada junto com o terminador nulo.

Valor de retorno
A função gets() retorna o mesmo ponteiro str em caso de sucesso. Em caso de falha ou condição de fim de arquivo, retorna NULL.

*/

/*
Exemplo 1: Lendo uma string da entrada padrão
Este exemplo lê uma string da entrada padrão usando gets() e então imprime a string inserida.

Abaixo está a ilustração da biblioteca C gets() função.*/

#include <stdio.h>

int main(){
	char str[100];
	
	printf("Enter a string: ");
	gets(str);
	printf("You entered: %s\n",str);
	
	return 0;
}

/*
Saída
O código acima produz o seguinte resultado−

Enter a string: Hello, World!
You entered: Hello, World!
*/

/*
Exemplo 2: Lidando com estouro de buffer
Este exemplo mostra o que acontece quando a string de entrada excede o tamanho do buffer, 
causando um estouro de buffer. Apenas os primeiros personagens que se encaixam o buffer é 
armazenado, levando a um comportamento inesperado.
*/

/*
#include <stdio.h>

int main() {
   char str[5];
   
   printf("Enter a string: ");
   gets(str);
   
   printf("You entered: %s\n", str);
   
   return 0;
}
*/

/*
Saída
Após a execução do código acima, obtemos o seguinte resultado

Enter a string: Overflow
You entered: Over
*/










