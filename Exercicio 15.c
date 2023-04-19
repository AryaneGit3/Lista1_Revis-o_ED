#include <stdio.h>
#include <stdlib.h>

//15. Crie uma função para mostrar a quantidade de elementos da fila.

typedef struct{
	char processo[40];
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

int achaTamanho(tfila *f) {
	int tamanho = 0;
	tno *aux = f->ini;
	while(aux != NULL) {
		tamanho++;
		aux = aux->prox;
	}
	return tamanho;
}
