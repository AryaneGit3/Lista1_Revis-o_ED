#include <stdio.h>
#include <stdlib.h>

// 17. Escreva uma função que verifique se uma fila encadeada que contém números
// inteiros está em ordem crescente.

typedef int tdado;

typedef struct no{
	tdado dado;
	struct no *prox;
}tno;

typedef struct{
	tno *ini,*fim;
	int tamanho;
}tfila;

//--------------------------

int ehCrescente(tfila *f) {
	int valor = f->ini->dado;
	tno *aux = f->ini->prox;
	while(aux != NULL) {
		if(aux->dado < valor) {
			return 0;
		}
		valor = aux->dado;
		aux = aux->prox;
	}
	return 1;
}
