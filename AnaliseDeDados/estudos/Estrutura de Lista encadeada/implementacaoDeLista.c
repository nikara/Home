#include <stdio.h>
#include <stdlib.h>

// Definição da estrutura do nó
typedef struct Node{
	int data; // Dados armazenados no nó
	struct Node *next; // Ponteiro para o próximo nó
}Node;

// Definição da estrutuea da lista (cabeça)
typedef struct Lista{
	Node *head; // Ponteiro para o primeiro nó da lista
	int size;	// Tamanho atual da lista
}Lista;

// Função para criar um novo nó
Node* createNode(int data){
	Node* newNode = (Node*)malloc(sizeof(Node));
	if(newNode == NULL){
		perror("Erro ao aolocar memória para o nó");
		exit(EXIT_FAILURE);
	}
	newNode -> data = data;
	newNode -> next = NULL;
	return newNode;
}

//Função para inicializar a lista
void initList(Lista* list){
	list -> head = NULL;
	list -> size = 0;
}

// Função para inserir um nó no início da lista
void insertAtBeginning(Lista* list, int data){
	Node* newNode = createNode(data);
	newNode -> next = list -> head;
	list -> head = newNode;
	list -> size++;
	printf("Elemento %d inserindo no início.\n", data);
}

// Função para inserir um nó no final da lista
void insertAtEnd(Lista* list, int data){
	Node* newNode = createNode(data);
	if(list -> head == NULL){
		list -> head = newNode;
	}else{
		Node* current = list -> head;
		while(current -> next != NULL){
			current = current -> next;
		}
		current -> next = newNode;
	}
	list -> size++;
	printf("Elemento %d inserido no final.\n", data);
}

// Função para remover um nó do início da lista
void removeFromBeginning(Lista* list){
	if(list -> head == NULL){
		printf("A lista está vazia. Nada para remover. \n");
		return;
	}
	Node* temp = list -> head;
	list -> head = list -> head -> next;
	printf("Elemento %d removido do início.\n", temp -> data);
	free(temp);
	list -> size--;
}

// Função para remover um nó do final da lista
void removeFromEnd(Lista* list){
	if(list -> head == NULL){
		printf("A lista está vazia. Nada para remover.\n");
		return;
	}
	if(list -> head -> next == NULL){ // Apenas um nó na lista
		printf("Elemento %d removido do final. \n", list -> head -> data);
		free(list -> head);
		list -> head = NULL;
		list -> size--;
		return;
	}
	Node* current = list -> head;
	while(current -> next -> next != NULL){
		current = current -> next;
	}
	printf("Element %d removido do final.\n", current -> next -> data);
	free(current -> next);
	current -> next = NULL;
	list -> size--;
}

// Função para buscar um elemento na lista
Node* searchElement(Lista* list, int data){
	Node* current = list -> head;
	while(current != NULL){
		if(current -> data == data){
			return current;
		}
		current = current -> next;
	}
	return NULL; // Elemento não encontrado
}

// Função para imprimir a lista
void printList(Lista* list){
	if(list -> head == NULL){
		printf("A lista está vazia.\n");
		return;
	}
	Node* current = list -> head;
	printf("Elementos da lista (%d): ", list -> size);
	while(current != NULL){
		printf("%d ", current -> data);
		current = current -> next;
	}
	printf("\n");
}

// Função para liberar a memória da lista
void freeList(Lista* list){
	Node* current = list -> head;
	Node* nextNode;
	while(current != NULL){
		nextNode = current -> next;
		free(current);
		current = nextNode;
	}
	list -> head = NULL;
	list -> size = 0;
	printf("Memóia da lista liberada.\n");
}

int main(){
	
	Lista myList;
	initList(&myList);
	
	// Inserir elemento no início 
	insertAtBeginning(&myList,10);
	insertAtBeginning(&myList,20);
	insertAtBeginning(&myList,30);
	printList(&myList);

	// Inserir elementos no final
	insertAtEnd(&myList, 5);
	insertAtEnd(&myList,15);
	printList(&myList);
	
	// Buscar um elemento 
	Node* found = searchElement(&myList,20);
	if(found != NULL){
		printf("Elemento 20 encontrado na lista.\n");
	}else{
		printf("Elemento 20 não encontrado na lista.\n");
	}
	
	found = searchElement(&myList,99);
	if(found != NULL){
		printf("Elemento 99 não encontrado na lista.\n");
	}
	
	// Remover do início
	removeFromBeginning(&myList);
	printList(&myList);
	
	// Remover do final
	removeFromEnd(&myList);
	printList(&myList);
	
	// Liberar a mémoria da lista
	freeList(&myList);
	printList(&myList); // Deve mostrar que a lista está vazia
	
	return 0;
}


