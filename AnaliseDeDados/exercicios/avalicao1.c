/*
Descreva o conceito de Fila em ciência da computação, incluindo suas principais características e tipos. Em sua resposta, explique o princípio FIFO (First In, First Out) 
e forneça exemplos de situações práticas em que filas são utilizadas.

Crie um programa que utilize um vetor (array) e implemente manualmente os métodos descritos, sem usar bibliotecas prontas da linguagem, garantindo que 
todas as operações sejam realizadas corretamente sem o uso de bibliotecas prontas.


Requisitos

Não utilizar bibliotecas prontas da linguagem.
Implementar manualmente as funcionalidades do ArrayList.


Funcionalidades

Criar um menu com as seguintes opções para o usuário:

Inserir elementos em um vetor
Na próxima posição livre do vetor 
Na posição informada 
Pesquisar um elemento no vetor 
Pelo elemento informado 
Pela posição do vetor 
Excluir um elemento do vetor 
Excluir o elemento informado
Exclui o elemento que está na posição informada
Imprimir o vetor


Explicação do que deve ser feito em cada opção do menu: 

Inserir elementos em um vetor
Na próxima posição livre do vetor: o usuário deve poder adicionar um novo elemento na próxima posição livre do vetor. 
O programa deve verificar se o vetor tem espaço suficiente para inserir esse novo elemento, se tiver, ele adiciona, caso contrário, 
ele emite uma mensagem ao usuário informando que o vetor está cheio.

Na posição informada: o usuário deve poder inserir um novo elemento em uma posição específica do vetor informada pelo próprio usuário. 
O programa deve deslocar os elementos existentes para abrir espaço para o novo elemento.

Pesquisar um elemento no vetor
Pelo elemento informado: o usuário deve poder pesquisar um elemento específico no vetor. O usuário deve informar o elemento que deseja pesquisar. 
O programa deve percorrer o vetor e retornar à posição do elemento, se encontrado, ou uma mensagem indicando que o elemento não foi encontrado.

Pela posição do vetor: o usuário deve poder acessar um elemento em uma posição específica do vetor. O programa deve retornar o valor do elemento 
na posição informada pelo usuário.

Excluir um elemento do vetor

Excluir o elemento informado: o usuário deve poder remover um elemento específico do vetor. O usuário informa o elemento que deseja excluir. 
O programa deve encontrar o elemento e removê-lo, deslocando os elementos subsequentes para preencher o espaço deixado pelo elemento removido.

Excluir o elemento que está na posição informada: o usuário deve poder remover um elemento em uma posição específica do vetor. O usuário deverá 
informar a posição que deseja remover o elemento. O programa deve deslocar os elementos subsequentes para preencher o espaço deixado pelo elemento removido.

Imprimir o vetor: o usuário deve poder visualizar todos os elementos do vetor. O programa deve percorrer o vetor e imprimir cada elemento em ordem.

Encerrar o programa: o usuário deve poder encerrar a execução do programa. 

*/

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <string.h>


#define SIZE 1000

int main(){
	
	
	
	// Istanciação do array
	char array[SIZE];	
	// Preenchendo o array com um valor NULO
	memset(array,'\0',sizeof(array));
	
	// Loop geral
	// Verivel que controla o loop
	bool chave = true;
	
	do{
		// Menu 
		
		printf("Menu de funcoess da fila");
		
		int opcao = 0;
		
		// Imprime as opções
		printf("\nInserir elementos em no vetor [1]");
		printf("\nPesquisar um elemento no vetor [2]");
		printf("\nExcluir um elemento do vetor [3]");
		printf("\nImprimir o vetor [4]");
		printf("\nEncerrar [0]");
		
		// Pede a opcao
		printf("\nDigite um opcao: ");
		scanf("%d",&opcao);
	
		
		// Inserir elementos
		if(opcao == 1){
			
			int subopcao = 0;
			printf("\nNa próxima posição livre do vetor [1]");
			
			printf("\nNa posição informada [2]");
			
			printf("\nDigite um opcao: ");
			scanf("%d",&subopcao);
			
			
			// Insere na posição que estiver livre
			if(subopcao == 1){
				for(int i = 0; i < sizeof(array); i++){
					if(array[i] == '\0'){
						printf("\nDigite o valor a ser inserido");
						scanf("%s",&array[i]);
						break;
					}
				}
			// Insere na posição informada				
			}else if(opcao == 2){
				printf("\nDigite a posição para inserir o valor");
				
				// variavel para receber a posicao
				int posicao = 0;
				scanf("%d",&posicao);
				
				// percorre o array ate achar a posicao
				for(int i = 0; i < sizeof(array); i++){
					if(posicao == i){
						// Verifica se a posicao esta vazia
						if(array[i] == '\0'){
							printf("\nDigite o valor a ser inserido");
							scanf("%s",&array[i]);
							break;
						// Se a posicao nao estiver vazia
						}else{
							// O valor em i e copiado para temp
							char temp = '\0';
							temp = array[i];
							// O novo valor e inserido em seu lugar
							printf("\nDigite o valor a ser inserido");
							scanf("%s",&array[i]);
							// O valor em temp e jogado na ultima posicao
							for(int i = 0; i < sizeof(array); i++){
								if(array[i] == '\0'){
									array[i] = temp;
									break;
								}
							}
						}
					}else{
						printf("\nposicao invalida");
					}
				}
				
			}
			
		}
		if(opcao == 2){
			
		}
		if(opcao == 3){
			
		}
		if(opcao == 4){
			
		}
		if(opcao == 0){
			chave = false;
		}
		
		
		
	}while(chave);
	
	
	
	return 0;
}