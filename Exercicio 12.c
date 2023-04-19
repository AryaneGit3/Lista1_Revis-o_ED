//12. Crie uma função para verificar se um elemento existe em uma fila circular estática.

#include <stdio.h>
#define MAX 10


typedef struct {
	int elementos[MAX];
	int ini;
	int fim;
}FilaCircular;

int existeDado(FilaCircular *fila, int elemento){
	int i;
	for(i = fila->ini; i != fila->fim; i = (i+1)%MAX){
	 if (fila->elementos[i]==elemento){
	 	return 1;
	 }
	 
	}
	if (fila->elementos[i] == elemento){
		return 1;
	}
	return 0; 
}

int main() {
    FilaCircular fila = {1, 2, 3, 4, 5};
    int elemento;
    printf("Digite o dado a ser consultado: ");
    scanf("%d", &elemento);
    

    if (existeDado(&fila, elemento)) {
        printf("O elemento %d existe na fila.\n", elemento);
    } else {
        printf("O elemento %d nao existe na fila.\n", elemento);
    }

    return 0;
}
	
	



