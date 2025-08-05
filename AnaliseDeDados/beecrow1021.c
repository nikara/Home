#include <stdio.h>

/* Leia um valor de ponto flutuante com duas casas decimais. 
Este valor representa um valor monetário. A seguir, calcule o 
menor número de notas e moedas possíveis no qual o valor pode 
ser decomposto. As notas consideradas são de 100, 50, 20, 10, 5, 2. 
As moedas possíveis são de 1, 0.50, 0.25, 0.10, 0.05 e 0.01. A
 seguir mostre a relação de notas necessárias.

Entrada
O arquivo de entrada contém um valor de ponto flutuante N (0 ≤ N ≤ 1000000.00).

Saída
Imprima a quantidade mínima de notas e moedas necessárias para trocar o valor inicial, conforme exemplo fornecido.

Obs: Utilize ponto (.) para separar a parte decimal.
*/

#define n 6 // Constante para o vetor das nota
#define m 7 // Constante para o vetor das moeda
#define r 13 // Constante para o vetor recebe


int main(){
	double valor = 573.73;
	double nota[n] = {100,50,20,10,5,2};
	double moeda[m] = {1,0.5,0.25,0.10,0.05,0.05,0.01};
	int caixa[12] = {0,0,0,0,0,0,0,0,0,0,0,0};
	double acumulador = 0;
	

	
	printf("Notas:");
	for(int i = 0; i < 6; i++){
		caixa[i] = (int) (valor-acumulador) / nota[i] ;
		printf("\n %d nota(s) de R$ %2.2f ",caixa[i],nota[i]);
		acumulador += nota[i]* caixa[i];
	}
	printf("\n Moedas:");
	for(int i = 6; i < 12; i++){
		caixa[i] = (valor-acumulador) / moeda[i-6] ;
		printf("\n %2.2f moeda(s) de R$ %2.2f ",caixa[i],moeda[i-6]);
		acumulador += moeda[6-i]*caixa[i];
	}
	
	
	return 0;
	
}