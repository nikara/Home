// Estudo da função fgets()

/*
A biblioteca C fgets(FILE *stream) a função obtém o próximo 
caractere ( char não assinado) do fluxo especificado e avança 
o indicador de posição para o fluxo. É comumente usado para ler 
entradas de um arquivo ou de entrada padrão (stdin).
*/

/*
Sintaxe:
A seguir está a sintaxe da biblioteca C do fgets() função −

char *fgets(char *str, int n, FILE *stream);
*/

/*
Parâmetros:
Esta função aceita os três parâmetros −

char *str:Um ponteiro para uma matriz de caracteres onde a string lida será armazenado. Esta matriz deve 
ser grande o suficiente para conter a string, incluindo o caractere nulo final.

int n: O número máximo de caracteres a ler, incluindo o terminando caractere nulo. 
fgets lerá até n-1 caracteres, deixando espaço para o caractere nulo.

FILE *stream: Um ponteiro para um objeto FILE que especifica a entrada fluxo para ler. 
Este pode ser um ponteiro de arquivo obtido de funções como fopen, ou pode ser stdin para entrada padrão.

*/

/*
Valor de retorno:
Em caso de sucesso, fgets retorna o mesmo ponteiro str que foi passado, 
que agora contém a string que foi lida. Se ocorrer um erro ou se o fim 
do arquivo for alcançado e nenhum caractere foi lido, fgets retorna NULL.
*/

/*
Exemplo 1: Lendo uma linha da entrada padrão
Este exemplo lê uma linha de texto da entrada padrão e a imprime. 
O buffer o tamanho é 50, permitindo linhas de até 49 caracteres (mais o null terminator).

Abaixo está a ilustração da biblioteca C fgets() função.
*/

#include <stdio.h>

int main(){
	char buffer[50];
	
	printf("Enter a string: ");
	if(fgets(buffer,sizeof(buffer),stdin) != NULL){
		printf("You entered: %s",buffer);
	}else{
		printf("Error reading input.");
	}
	
	return 0;
}

