#include <stdio.h>
#include <stdlib.h>

typedef struct{
	int dia, mes,ano;
}Data;

void imprimirData(Data data){
	printf("\n\t%d%d%d\n", data.dia, data.mes, data.ano);
}

void imprimirDataP(Data *data){
	printf("\n\t%d / %d / %d\n", data -> dia, data -> mes, data -> ano);
}

int main(){ // Como criar um ponteiro para struct ?

Data data;

data.dia = 10;
data.mes = 3;
data.ano = 1998;

imprimirData(data);
imprimirDataP(&data);


return 0;
	
}