/*
beecrowd 1259
Pares e Ímpares
Considerando a entrada de valores inteiros não negativos, 
ordene estes valores segundo o seguinte critério:

Primeiro os Pares
Depois os Ímpares
Sendo que deverão ser apresentados os pares em ordem crescente e depois os ímpares em ordem decrescente.

Entrada
A primeira linha de entrada contém um único inteiro positivo N (1 < N <= 10^5) 
Este é o número de linhas de entrada que vem logo a seguir. As próximas N linhas 
conterão, cada uma delas, um valor inteiro não negativo.

Saída
Apresente todos os valores lidos na entrada segundo a ordem apresentada acima. Cada número deve ser impresso em uma linha, conforme exemplo abaixo.
10
4
32
34
543
3456
654
567
87
6789
98
*/

// Bibliotecas

#include <stdio.h>
#include <math.h>
#include <stdbool.h>

#define MAX_SIZE 1000

//Estrutura de pilha
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
// Retorna o tamanha da pilha(Size)
int size(Stack *s){
	return s -> top + 1;
}

int main() { 

// Cria o expoente de 10 sobre 5
double X = 10;
double Y = 5;
double expoente = pow(X,Y);

// Instancio a variavel N
int N = 10;
// Recebe N
// aqui vai esse scanf ("%lf",&N);
getchar();


// Declara as pilhas

// Pilha impar
Stack impar;
initialize(&impar);

// Pilha par

Stack par;
initialize(&par);

// Verifica se N atende a os parametros.
	if(N > 1 && N < expoente){
		/// Entroduz os valores no vetor Valor
		for (int i = 0; i < N; i++){
			// variavel para receber os valores
			int valor = 0;
			// recebe os valores
			scanf("%d",&valor);
			
			//Verifica se valor e par
			if(valor%2 == 0){
				push(&par,valor);
			}
			//Verifica se valor e impar
			else if (valor%2 == 1){
				push(&impar,valor);
			}
		}	
	}
	
// Ordena a pilha par

for (int i = 0; i < size(&par); i++){
	
}
return 0;
}
