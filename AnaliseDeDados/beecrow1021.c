
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

#include <stdio.h>


int main() { 
	double valor;
	scanf ("%lf",&valor);
	int notas[] = {100,50,20,10,5,2};
	double moedas[] = {1.00,0.50,0.25,0.10,0.05,0.01};
	
	int qtdNotas, qtdMoedas;
	
	printf("NOTAS:");
	for(int i = 0; i < 6; i++){
		qtdNotas = (int) (valor / notas[i]) ;
		printf("\n %d nota(s) de R$ %.2f ",qtdNotas,(double)notas[i]);
		valor -= qtdNotas* notas[i];
	}
	
	valor = (int)(valor * 100+0.5);
	
	printf("\n MOEDAS:");
	for(int i = 0; i < 6; i++){
		qtdMoedas = (int) (valor / moedas[i]) ;
		printf("\n %d moeda(s) de R$ %.2f ",qtdMoedas,moedas[i]);
		valor -= qtdMoedas*(int)moedas[i];
	}
	
	return 0;
	
}