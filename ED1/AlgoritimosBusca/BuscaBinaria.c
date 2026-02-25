#include <stdio.h>
#define tam 7

int buscaBinaria(int *vet, int n, int chave)
{
    int inicio, meio, fim;

    inicio = 0;
    fim = n - 1;

    while (inicio <= fim)
    {

        meio = (inicio + fim) / 2;

        if (vet[meio] == chave)
        {
            return meio;
        }
        else if (chave < vet[meio])
        {
            fim = meio - 1;
        }
        else
        {
            inicio = meio + 1;
        }
        
    }
    return -1;
}

int main(void)
{

    int vet[tam] = {2, 4, 6, 8, 10, 12, 14};
    
    int chave = 4;

    printf("posicao: %d", buscaBinaria(vet, tam, chave));

    return 0;
}
