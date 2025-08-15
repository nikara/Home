// beecrow 1068
/*
Dada uma expressão qualquer com parênteses, indique se a quantidade de parênteses está correta ou não, sem levar em conta o restante da expressão. Por exemplo:

a+(b*c)-2-a        está correto
(a+b*(2-c)-2+a)*2  está correto

enquanto

(a*b-(2+c)         está incorreto
2*(3-a))           está incorreto
)3+b*(2-c)(        está incorreto

Ou seja, todo parênteses que fecha deve ter um outro parênteses que abre correspondente e não pode haver parênteses 
que fecha sem um previo parenteses que abre e a quantidade total de parenteses que abre e fecha deve ser igual.

Entrada
Como entrada, haverá N expressões (1 <= N <= 10000), cada uma delas com até 1000 caracteres.

Saída
O arquivo de saída deverá ter a quantidade de linhas correspondente ao arquivo de entrada, cada 
uma delas contendo as palavras correct ou incorrect de acordo com as regras acima fornecidas.


*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>

// Implentação da pilha
#define MAX_SIZE 1002 // Tamanho máximo da pilha

// Estrutura para represar a pilha

typedef struct {
	char items[MAX_SIZE];// Array para armazenar os elementos (neste caso, caracteres)
	int top; // Índice do topo da pilha
}Stack;

// Inicializa a pilha
void initialize(Stack *s){
	s -> top = -1; // -1 indica que a pilha está vazia
}

// Verifica se a pilha está vazia
bool isEmpty(Stack *s){
	return s -> top == -1;
}

// Verifica se a pilha está cheia
bool isFull(Stack *s){
	return s -> top == MAX_SIZE - 1;
}

// Adiciona um elemento ao topo da pilha(Push)
void push(Stack *s,char value){
	if(isFull(s)){
		printf("Erro: Pilha cheia! Nao eh possivel adicionar mais elementos.\n");
	}else {
		s -> items[++(s -> top)] = value; // Incrementa o topo e adiciona o valor
	}
}

//Remove e retorna o elemento do topo da pilha(Pop)
char pop(Stack *s){
	if(isEmpty(s)){
		printf("Erro: Pilha vazia! Nao ha elementos para remover.\n");
		return '\0'; // Retorna um caractere nulo ou outro valor de erro
	}else{
		return s -> items[(s -> top)--]; // Retorna o valor e decrementa o topo
	}
}

// Retorna o elemento do topo da pilha sem remove-lo (Peek/Top)
char peek(Stack *s){
	if(isEmpty(s)){
		printf("Erro: Pilha vazia! Nao ha elementos para consultar.\n");
		return '\0';
	}else {
		return s -> items[s -> top];
	}
}

int main(){
	
	// recebe as expressões
	char expressao[MAX_SIZE];
	
	while(fgets(expressao,sizeof(expressao),stdin) != NULL){
		
		Stack pilha;
		initialize(&pilha);
		
		// Criando o comprimento da expresssao
		int comprimento = 0;
		comprimento = strlen(expressao);
		
		//Valida se esta incorreto
		bool correto = true;
		
		// Loop para analisar a expressao
		for(int i = 0; i < comprimento; i++){
			// recebe os colchetes abertos'('
			if(expressao[i] == '('){
				push(&pilha,expressao[i]);
			}else if(expressao[i] == ')'){
				if(isEmpty(&pilha)){
					correto = false;
					break;
				}else{
					pop(&pilha);
				}
			}
		}
		if(correto && isEmpty(&pilha)){
			printf("corret\n");
		}else{
			printf("incorret\n");
		}
		
	}
	
	return 0;
}

