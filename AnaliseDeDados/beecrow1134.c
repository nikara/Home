/*
Tipo de Combustível
Um Posto de combustíveis deseja determinar qual de seus produtos tem a preferência de seus clientes.
Escreva um algoritmo para ler o tipo de combustível abastecido (codificado da seguinte forma: 1.Álcool 2.Gasolina 3.Diesel 4.Fim). 
Caso o usuário informe um código inválido (fora da faixa de 1 a 4) deve ser solicitado um novo código (até que seja válido). 
O programa será encerrado quando o código informado for o número 4.

Entrada
A entrada contém apenas valores inteiros e positivos.

Saída
Deve ser escrito a mensagem: "MUITO OBRIGADO" e a quantidade de clientes que abasteceram cada tipo de combustível, conforme exemplo.

Exemplo de Entrada		Exemplo de Saída
8							MUITO OBRIGADO
1							Alcool: 1
7							Gasolina: 2
2							Diesel: 0
2
4
*/

#include <stdio.h>


int main() { 

//Entrada do primeiro valor para iniciar o programa
	// variavel para entrada dos valores
	int valor = 0;
	// Vetor para armazenar os valores
	int acumulador[3] = {0,0,0};

	

	do{
		scanf("%d",&valor);	
		switch(valor){
			// Álcool
			case 1:
				acumulador[0] = acumulador[0] + 1;
			break;
			// Gasolina
			case 2:
				acumulador[1] = acumulador[1] + 1;
			break;
			//Diesel
			case 3:
				acumulador[2] = acumulador[2] + 1;
			break;
			// Fim
			case 4:
				
			break;	
		}
	}while(	valor != 4);
	
// Imprimir os resultados
	printf("\nMUITO OBRIGADO");
	// Álcool
	printf("\nAlcool:%d",acumulador[0]);
	//Gasolina
	printf("\nGasolina:%d",acumulador[1]);
	//Diesel
	printf("\nDiesel:%d",acumulador[2]);

return 0;
}
