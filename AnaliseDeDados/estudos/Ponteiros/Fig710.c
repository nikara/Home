/*Teste da figura 7.10
Convertendo uma string em  maiúsculas usadno um ponteiro não constate para dados não constantes.
*/

#include <stdio.h>
#include <ctype.h>

void convertToUppercase (char *sPtr); // Protótipo

int main(){
	char string[] = "caracteres e R$32,98"; // Inicializa array de char
	
	printf("A string antes da conversão é: %s", string);
	convertToUppercase(string);
	printf("\n A string após a conversão é: %s\n", string);
	return 0; //indica conclusão bem-sucedida
	
}

// Converte string em letras maiúsculas

void convertToUppercase(char *sPtr){
	while (*sPtr != '\0'){ // caractere atual não é '\0'
		if(islower(*sPtr)){// se o caractere é minúsculo
			*sPtr = toupper(*sPtr);// converte um maiúscula
		}
		++sPtr; // desloca sPtr para o caracter seguinte
}
}