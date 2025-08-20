// Estudo sobre ponteiros

// material base: C como programar 6°edição deitel

// 7.2 Declarações e inicialização de variáveis-ponteiro

/*
Os ponteiros são variáveis cujos valores são endereços de memória. Normalmente, uma variável contém um valor específico. 
Um ponteiro, por outro lado, contém um endereço de uma variável que contém um valor específico. De certa forma, um nome
de variável referencia um valor diretamente, enquanto um ponteiro referencia um valor indiretamente. A referência de um
valor por meio de um ponteiro é chamda de indireção
	 
	 Ponteiros, assim como todas as variáveis, precisam ser definidos antes de poderem ser usadas. a definição:
	 	int *countPtr, count;
	 	
especifica que a variável countPtr é do tipo int*(ou seja, um ponteiro para um inteiro), e que  pe lida como "countPtr é
um ponteiro para int" ou "countPtr aponta para um objeto do tipo int". Além disso, a variável count é definida para ser um int, 
e não um ponteiro para um int. 0* pode ser aplicado somente a countPtr na definição. Quando * é usado dessa maneira em uma definição,
ele indica que a variável que está sendo definida é um ponteiro. Os ponteiros podem ser definidos para apontar objetos de qualquer tipo.
*/

// Erro comun em programação 7.1
/* A notação (*), usada para declarar variáveis de ponteiro, não distribui para todos os nomes de variáveis em uma declaração. Cada ponteiro
precisa ser declarado com o * prefixado ao nome; por exemplo, se você quiser declarar xPtr e yPtr como ponteiros int, use int *xPtr, *yPtr;*/

// Erro comun em programação 7.2
/* Inclua as letras ptr nos nomes de variáveis de ponteiro para deixar claro que essa variáveis são ponteiros, e portanto, precisam ser tratadas
de modo apropriado.*/

/*
Os ponteiros devem ser inicializados quando são definidos, ou em uma instrução de atribuição. Um ponteiro pode ser inicializado com NULL, 0, ou um
endereço. Um ponteiro de valor NULL não aponta para nada NULL é uma constante simbólica definida no cabeçalho <stddef.h>(e em vários outros cabeçalhos,
como <stdio.h>. Inicializar um ponteiro em 0 é equivalente a inicializar um ponteiro com NULL, mas NULL é mais conveniente. 
Quando 0 é atribuido, ele é,em primeiro lugar, convertido em um ponteiro apropriado. O valor 0 é o único valor inteiro que poder ser 
atribuído diretamente a uma variável de ponteiro.
*/

// 7.3 Operadores de ponteiros
