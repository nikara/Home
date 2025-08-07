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

#include <stdio.h>
#include <math.h>

int main() { 

double X = 10;
double Y = 5;
double expoente = pow(X,Y);
int N = 5;
int temp;



// aqui vai esse scanf ("%lf",&N);
int valor[] = {10,4,32,34,543,3456,654,567,87,6789,98};

// Verifica se N atende a os parametros.
	if(N > 1 && N < expoente){
		/// Entroduz os valores no vetor Valor
		for (int i = 0; i < N; i++){
			// Aqui entraram os valores
			//scanf ("%d",&valor[i]);
		}	
	}
// Organiza o vetor

for(int i = 0; i < 11; i++ ) {
	for (int j = 0; j < 11; j++){
		if(valor[i] < valor[j]){
			temp = valor[i];
			valor[i] = valor[j];
			valor[j] = temp;
		}
	}
}






return 0;
}
