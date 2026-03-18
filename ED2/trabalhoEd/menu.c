#include <stdio.h>
#include "menu.h"

void menu(ArvoreB *arvore, char *arquivoReg, char *arquivoArvore) {
    int op;

    do {
        printf("\n1 - Cadastrar\n");
        printf("2 - Pesquisar\n");
        printf("3 - Gravar\n");
        printf("4 - Sair\n");
        printf("Opcao: ");
        scanf("%d", &op);

        switch (op) {
            case 1:
                printf("cadastrar\n");
                break;

            case 2:
                printf("pesquisar\n");
                break;

            case 3:
                printf("gravar\n");
                break;

            case 4:
                printf("Encerrando\n");
                break;

            default:
                printf("Opcao invalida\n");
        }

    } while (op != 4);
}