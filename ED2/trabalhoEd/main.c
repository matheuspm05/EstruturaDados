#include <stdio.h>
#include "arvoreb.h"
#include "menu.h"

int main(void) {
    
    ArvoreB arvore = criar_arvore();

    printf("Arvore criada.\n");

    arvore = criar_no(1);

    if (arvore != NULL) {
        printf("No raiz alocado com sucesso.\n");
        printf("n = %d\n", arvore->n);
        printf("folha = %d\n", arvore->folha);
    } else {
        printf("Erro ao criar no raiz.\n");
    }

    return 0;
}
