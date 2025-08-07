// Exemplo 2 de fgets
/*
Exemplo 2: Manipulação de fim de arquivo
Este exemplo lê um arquivo linha por linha com um tamanho de buffer menor, manipulando a
condição de fim de arquivo explicitamente. Se o fim do arquivo for atingido, a a mensagem 
é impressa.
*/

#include <stdio.h>

int main(){
	FILE *file = fopen("example.txt","r");
	char buffer[20];
	
	if(file == NULL){
		printf("Failed to open file.\n");
		return 1;
	}
	
	while (fgets(buffer,sizeof(buffer),file) != NULL){
		printf("Read: %s", buffer);
		
	}
	
	if(feof(file)){
		printf("End of file reached.\n");
	}else if(ferror(file)){
		printf("An error occurred.\n");
	}
	fclose(file);
	
	return 0;
}
