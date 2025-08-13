
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
    scanf("%lf", &valor);

    // Adiciona uma pequena constante (epsilon) para corrigir imprecisões de ponto flutuante.
    // Isso garante que valores como 576.73 não sejam tratados como 576.729999...
    valor += 1e-9;

    printf("NOTAS:\n");
    int notas[] = {100, 50, 20, 10, 5, 2};
    for (int i = 0; i < 6; i++) {
        int qtdNotas = (int)(valor / notas[i]);
        printf("%d nota(s) de R$ %d.00\n", qtdNotas, notas[i]);
        valor -= qtdNotas * notas[i];
    }

    printf("MOEDAS:\n");
    // Convertendo o valor para centavos para evitar erros com double.
    // Ex: R$ 0.73 se torna 73 centavos.
    int valor_centavos = (int)(valor * 100);
    int moedas[] = {100, 50, 25, 10, 5, 1}; // Trabalhando com centavos
    for (int i = 0; i < 6; i++) {
        int qtdMoedas = valor_centavos / moedas[i];
        // O valor da moeda em reais é o valor em centavos dividido por 100.0
        printf("%d moeda(s) de R$ %.2f\n", qtdMoedas, (double)moedas[i] / 100.0);
        valor_centavos %= moedas[i]; // Usando o operador de módulo para obter o resto
    }

    return 0;
}
