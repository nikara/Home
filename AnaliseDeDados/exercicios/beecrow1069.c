/*
beecrowd 1069
Diamantes e Areia
João está trabalhando em uma mina, tentando retirar o máximo que consegue de diamantes "<>". 
Ele deve excluir todas as particulas de areia "." do processo e a cada retirada de diamante, 
novos diamantes poderão se formar. Se ele tem como uma entrada .<...<<..>>....>....>>>., três diamantes são formados. 
O primeiro é retirado de <..>, resultando  .<...<>....>....>>>. Em seguida o segundo diamante é retirado, restando 
.<.......>....>>>. O terceiro diamante é então retirado, restando no final .....>>>., sem possibilidade de extração de novo diamante.

Entrada
Deve ser lido um valor inteiro N que representa a quantidade de casos de teste. Cada linha a seguir é um caso de teste que contém 
até 1000 caracteres, incluindo "<,>, ."

Saída
Você deve imprimir a quantidade de diamantes possíveis de serem extraídos em cada caso de entrada.
*/

#include <stdio.h>
#include <string.h>

// Implementando uma pilha

// difine o tamanho da pilha
#define MAX_SIZE 1001


// Criando a pilha
typedef struct{
	char items[MAX_SIZE];
	int top;
	
}pilha;
// Funções

void iniciarPilha(pilha *s){
	s -> top = -1;
}

int isEmpty(pilha *s){
	return s->top == -1;
}

int isFull(pilha *s){
	return s -> top == MAX_SIZE - 1;
}

char peek(pilha *s){
	if(isEmpty(s)){
		printf("Erro: Pilha vazia!");
	}
	return s -> items[s->top];
}

int size(pilha *s){
	return s -> top + 1;
}

void push(pilha *s, char value){
	if(isFull(s)){
		printf("Erro: Pilha cheia !");
	}else{
		s -> top++;
		s -> items[s -> top] = value;
	}
}

void pop(pilha *s){
	if(isEmpty(s)){
		printf("Erro: Pilha vazia!");
	}else{
		s -> top --;
	}
}



int main() { 
// Valor n par os loops
int n = 0;
// Lê e armazena o valor n
scanf ("%d", &n);



for(int i = 0; i < n; i++){
	// inicializa a pilha
	pilha caixa;
	iniciarPilha(&caixa);
	
	// conta os diamente;
	int diamante = 0;
	
	// armazena os valores que seram inseridos
	char x[1000];
	
	//recebe os valores
	scanf("%s", &x);
	
	// recebe o comprimento do x
	int comprimento = 0;
	comprimento = strlen(x);
	
	for(int t = 0; t < comprimento; t++){
		if(x[t])
			push(&caixa,x[t]);
		}else if (!isEmpty(&caixa) && x[t] != '.'){
			pop(&caixa);
			diamante += 1;
		}
	}
	printl("%d",diamante);

return 0;
}
