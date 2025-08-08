// Implementação básica de uma pilha em C (Usando Array)
/*
Uma das formas mais comuns e simples de implementar uma pilha em C é usando um array.
Precisaremos de um array para armazenar os elementos da pilha e uma variável para controlar 
o "topo" da pilha.
*/

#include <stdio.h>
#include <stdbool.h> // Para usar 'true' e 'false'

#define MAX_SIZE 100 // Tamanho máximo da pilha

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
	
int main() {
	Stack minhaPilha;
	initialize(&minhaPilha);
	
	printf("Pilha vazia %s\n", isEmpty(&minhaPilha) ? "Sim" : "Não");
	
	push(&minhaPilha, 'A');
	push(&minhaPilha, 'B');
	push(&minhaPilha, 'C');
	
	printf("Topo da pilha: %c\n", peek(&minhaPilha));
	printf("Pilha vazia? %s\n", isEmpty(&minhaPilha));
	
	printf("Desempilhando: %c\n", pop(&minhaPilha));
	printf("Desempilhando: %c\n", pop(&minhaPilha));
	
	printf("Topo da pilha: %c\n", peek(&minhaPilha));
	
	push(&minhaPilha,'D');
	printf("Topo da pilha: %c\n", peek(&minhaPilha));
	
	printf("Desempilhando: %c\n", pop(&minhaPilha));
	printf("Desempilhando: %c\n", pop(&minhaPilha));
	
	printf("Pilha vazia? %s\n", isEmpty(&minhaPilha)? "Sim" : "Não");
	
	// Tentando desempilhar de uma pilha vazia
	
	pop(&minhaPilha);
	
	return 0;
}	
	
	
