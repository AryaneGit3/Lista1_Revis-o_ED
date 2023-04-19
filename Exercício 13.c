#include <stdio.h>
#include <stdlib.h>

typedef struct fila {
    int* elementos;
    int tamanho;
} Fila;

Fila* criar_fila() {
    Fila* fila = (Fila*) malloc(sizeof(Fila));
    fila->elementos = (int*) malloc(sizeof(int));
    fila->tamanho = 0;
    return fila;
}

void enfileirar(Fila* fila, int valor) {
    fila->elementos = (int*) realloc(fila->elementos, sizeof(int) * (fila->tamanho + 1));
    fila->elementos[fila->tamanho] = valor;
    fila->tamanho++;
}

int encontrar_posicao_na_fila(Fila* fila, int valor) {
    for (int i = 0; i < fila->tamanho; i++) {
        if (fila->elementos[i] == valor) {
            return i;
        }
    }
    return -1;
}

int main() {
    Fila* fila = criar_fila();
    enfileirar(fila, 1);
    enfileirar(fila, 2);
    enfileirar(fila, 3);

    int posicao_do_2 = encontrar_posicao_na_fila(fila, 2);
    printf("%d\n", posicao_do_2);  // saída: 1

    int posicao_do_4 = encontrar_posicao_na_fila(fila, 4);
    printf("%d\n", posicao_do_4);  // saída: -1

    free(fila->elementos);
    free(fila);
    return 0;
}
