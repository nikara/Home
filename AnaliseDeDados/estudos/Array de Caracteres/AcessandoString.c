// Acessando Caracteres Individuias de uma String em C
/*
Em C, uma string é essencialmente um array de caracteres. Isso significa que você 
pode acessar cada caractere individualmente usando a notação de colchetes [] , 
assim como faria com qualquer outro elemento de um array.
*/

//Como funciona?
/*Cada caractere em uma string ocupa uma posição (ou índice) dentro do array. 
O primeiro caractere está no índice 0 , o segundo no índice 1, e assim por diante. 
O último caractere de uma string em C é sempre o caractere nulo \0 , que marca o 
fim da string. Para acessar um caractere específico, você usa o nome da variável da
string seguido de colchetes [] contendo o índice do caractere que você deseja acessar.
*/

//Sintaxe:
// char_da_string = nome_da_string[indice];

//Onde:
/*
nome_da_string é a variável que armazena a string (um array de de char ). 
indice é a posição numérica do caractere que você quer acessar (começando do 0 ).
*/

// Exemplo Prático:
// Vamos ver um exemplo de como voçê pode declarar uma string e acessar seus caracteres:

#include <stdio.h>
#include <string.h>

int main(){
	char saudacao[] = "Ola Mundo!"; // declara e inicializa uma string
	
	// acessando caracteres individuais
	char primeiro_caractere = saudacao[0];// 'o'
	char segundo_caractere = saudacao[1];// 'l'
	char espaco = saudacao[3];// ' '
	// você pode usar um loop para percorrer a string
	printf("Percorrendo a string:\n");
	for(int i = 0; i < strlen(saudacao); i++){
		printf ("Caractere no indice %d: %c\n", i,saudacao[i]);
	}
	
	printf("\nPrimeiro caracterre: %c\n",primeiro_caractere);
	printf("Segundo caractere: %c\n",segundo_caractere);
	printf("Caractere no indice 3 (espaco): %c\n", espaco);
	
	// Modificando um caractere (string são mutáveis em C)
	saudacao[0] = 'o'; // Altera 'O' para 'o'
	prinft("\nString apos modificacao: %s\n", saudacao);
	
	return 0;
}

//Importante:
/* 
Índices: Lembre-se que os índices começam em 0

\0 (Caractere Nulo): Todas as strings em C são terminadas por um caracter nulo

(\0). Funções como strlen() usam esse caractere para determinar o comprimento da 
string. Ao acessar caracteres,certifique-se de não ir além de strlen() para evitar
acessar memória inválida.

Mutabilidade: Strings em C são mutáveis, o que significa que você pode alterar caractere
individuias em uma string após ela ter sido declarada, como mostrado no exemplo saudacao[0] ='o';.

*/