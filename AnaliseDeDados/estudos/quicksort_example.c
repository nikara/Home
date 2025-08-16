#include <stdio.h>

// Função auxiliar para trocar dois elementos
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Função de particionamento (implementação de Lomuto, usando o último elemento como pivô)
int partition(int vetor[], int low, int high) {
    int pivo = vetor[high]; // Escolhe o último elemento como pivô
    int i = (low - 1);      // Índice do menor elemento

    for (int j = low; j <= high - 1; j++) {
        // Se o elemento atual é menor ou igual ao pivô
        if (vetor[j] <= pivo) {
            i++; // Incrementa o índice do menor elemento
            swap(&vetor[i], &vetor[j]); // Troca o elemento atual com o elemento no índice i
        }
    }
    // Coloca o pivô em sua posição correta
    swap(&vetor[i + 1], &vetor[high]);
    return (i + 1); // Retorna o índice da posição final do pivô
}

// Função principal que implementa o Quicksort
void quickSort(int vetor[], int low, int high) {
    // Condição de parada da recursão: se o sub-array tem 0 ou 1 elemento, ele já está ordenado.
    if (low < high) {
        // pi é o índice de particionamento, vetor[pi] está agora no lugar certo
        int pi = partition(vetor, low, high);

        // Ordena os elementos separadamente antes e depois da partição
        quickSort(vetor, low, pi - 1);  // Chama Quicksort para o sub-array à esquerda do pivô
        quickSort(vetor, pi + 1, high); // Chama Quicksort para o sub-array à direita do pivô
    }
}

// Função de particionamento para ordem decrescente
int partition_decrescente(int vetor[], int low, int high) {
    int pivo = vetor[high]; 
    int i = (low - 1);      

    for (int j = low; j <= high - 1; j++) {
        if (vetor[j] >= pivo) { 
            i++; 
            swap(&vetor[i], &vetor[j]); 
        }
    }
    swap(&vetor[i + 1], &vetor[high]);
    return (i + 1); 
}

// Função principal que implementa o Quicksort para ordem decrescente
void quickSort_decrescente(int vetor[], int low, int high) {
    if (low < high) {
        int pi = partition_decrescente(vetor, low, high);
        quickSort_decrescente(vetor, low, pi - 1);
        quickSort_decrescente(vetor, pi + 1, high);
    }
}

// Função para imprimir um array
void printArray(int vetor[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
}

// Função principal (main) para testar o Quicksort
int main() {
    int arr[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Array original (crescente): ");
    printArray(arr, n);

    quickSort(arr, 0, n - 1);

    printf("Array ordenado (crescente): ");
    printArray(arr, n);

    // Teste com outro array para ordem decrescente
    int arr2[] = {50, 20, 10, 40, 30};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    printf("\nArray original (decrescente): ");
    printArray(arr2, n2);

    quickSort_decrescente(arr2, 0, n2 - 1);

    printf("Array ordenado (decrescente): ");
    printArray(arr2, n2);

    return 0;
}


