#include <stdio.h>
#define tam 7

int buscaBinariaRecursiva(int *vet, int chave, int inicio, int fim)
{
    if (inicio > fim) {
        return -1; 
    }

    int meio = (inicio + fim) / 2;

    if (vet[meio] == chave) {
        return meio; 
    }
    else if (chave < vet[meio]) {
        return buscaBinariaRecursiva(vet, chave, inicio, meio - 1); 
    }
    else {
        return buscaBinariaRecursiva(vet, chave, meio + 1, fim); 
    }
}

int main(void)
{
    int inicio = 0, fim = tam - 1;

    int vet[tam] = {2, 4, 6, 8, 10, 12, 14};
    
    int chave = 4;

    printf("posicao: %d", buscaBinariaRecursiva(vet, chave, inicio, fim ));

    return 0;
}