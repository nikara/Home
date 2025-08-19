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
#include <stdlib.h>

// Função de comparação para qsort (pares em ordem crescente)
int compare_pares(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

// Função de comparação para qsort (ímpares em ordem decrescente)
int compare_impares(const void *a, const void *b) {
    return (*(int*)b - *(int*)a);
}

int main() {
    int N;
    scanf("%d", &N);

    // Usando VLA (Variable Length Array) para evitar ponteiros e malloc
    int numeros[N];
    int pares[N];
    int impares[N];

    int count_pares = 0;
    int count_impares = 0;

    for (int i = 0; i < N; i++) {
        scanf("%d", &numeros[i]);
        if (numeros[i] % 2 == 0) {
            pares[count_pares++] = numeros[i];
        } else {
            impares[count_impares++] = numeros[i];
        }
    }

    // Ordena os pares em ordem crescente
    qsort(pares, count_pares, sizeof(int), compare_pares);

    // Ordena os ímpares em ordem decrescente
    qsort(impares, count_impares, sizeof(int), compare_impares);

    // Imprime os pares
    for (int i = 0; i < count_pares; i++) {
        printf("%d\n", pares[i]);
    }

    // Imprime os ímpares
    for (int i = 0; i < count_impares; i++) {
        printf("%d\n", impares[i]);