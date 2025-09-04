#include <stdio.h>
#define tam 7

void imprimir(int *v, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", v[i]);
    }
}

void BubbleSort(int *v, int n)
{
    int aux, trocas = 1;

    while (trocas)
    {
        trocas = 0; 

        for (int j = 0; j < n - 1; j++)
        {
            if (v[j] > v[j + 1])
            {
                aux = v[j];
                v[j] = v[j + 1];
                v[j + 1] = aux;
                
                trocas = 1; 
            }
        }
    }
}

int main()
{

    int vet[tam] = {7, 4, 5, 9, 8, 2, 1};
    printf("Antes da ordenacao:\n");
    imprimir(vet, tam);

    BubbleSort(vet, tam);

    printf("\nDepois da ordenacao:\n");
    imprimir(vet, tam);

    return 0;
}
