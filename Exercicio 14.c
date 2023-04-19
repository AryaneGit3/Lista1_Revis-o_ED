
#include <stdio.h>
#include <stdlib.h>

// Definindo a estrutura do nó da pilha
typedef struct no {
    int dado;
    struct no *prox;
} No;

// Função para criar um novo nó da pilha
No *criarNo(int valor) {
    No *novoNo = (No *) malloc(sizeof(No));
    novoNo->dado = valor;
    novoNo->prox = NULL;
    return novoNo;
}

// Função para inserir um elemento na pilha
void empilhar(No **topo, int valor) {
    No *novoNo = criarNo(valor);
    novoNo->prox = *topo;
    *topo = novoNo;
}

// Função para remover um elemento da pilha
void desempilhar(No **topo) {
    if (*topo == NULL) {
        return;
    }
    No *temp = *topo;
    *topo = (*topo)->prox;
    free(temp);
}

// Função para exibir o elemento no topo da pilha
int topo(No *topo) {
    return topo->dado;
}

// Função principal
int main() {
    No *topo = NULL;
    int escolha, valor;
    do {
        printf("\n1. Empilhar um elemento");
        printf("\n2. Desempilhar um elemento");
        printf("\n3. Exibir o elemento no topo");
        printf("\n4. Sair");
        printf("\nEscolha uma opção: ");
        scanf("%d", &escolha);
        switch (escolha) {
            case 1:
                printf("\nInsira um valor: ");
                scanf("%d", &valor);
                empilhar(&topo, valor);
                printf("Valor %d inserido com sucesso na pilha", valor);
                break;
            case 2:
                if (topo == NULL) {
                    printf("\nA pilha está vazia");
                } else {
                    printf("\nValor %d removido da pilha", topo(topo));
                    desempilhar(&topo);
                }
                break;
            case 3:
                if (topo == NULL) {
                    printf("\nA pilha está vazia");
                } else {
                    printf("\nElemento no topo da pilha: %d", topo(topo));
                }
                break;
            case 4:
                printf("\nSaindo do programa");
                break;
            default:
                printf("\nOpção inválida");
        }
    } while (escolha != 4);
    return 0;
}
