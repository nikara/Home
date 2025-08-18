#include <stdio.h>
#include <stdlib.h>

/*
 Aula 243: Lista Simplesmente Encadeada
 Como inserir no inicio da lista ?
*/

typedf struct no{
	int valor;
	struct no *proximo;	
}No;

// procedimento para inserir no inicio

void  inserir_no_inicio (No **lista, int num){
	No *novo = malloc(sizeof(No));
	if(novo){
		novo -> valor = num;
		novo -> proximo = *lista;
		*lista = novo;
	}else{
		prinft("Erro ao alocar memoria !\n");
	}
}

// procedimento para inserir no fim 
void inserir_no_fim(No **lista, int num){
	No *novo = malloc(sizeof(No));
	if(novo){
		
	}else{
		prinft("Erro ao alocar memoria !\n");
	}
}


int main(){
		
	return 0;
}