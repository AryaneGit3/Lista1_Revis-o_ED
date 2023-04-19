#include <stdio.h>
#include <stdlib.h>

//14. Crie uma função para apresentar o último elemento da fila.

typedef struct{
	char elementos[50];
	int tempo;
}tdado;

typedef struct no{
	tdado dado;
	struct no *prox;
}tno;

typedef struct{
	tno *ini,*fim;
	int tamanho;
}tfila;

//--------------------------

int ultimo(tfila f) {
	if(f.fim != NULL) {
		return f.fim->dado;
	}
}
