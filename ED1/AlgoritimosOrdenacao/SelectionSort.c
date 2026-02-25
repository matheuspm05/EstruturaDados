#include <stdio.h>
#define tam 7

void imprimir(int *v, int n)
{
    for (int i = 0; i < n; i++)
    {

        printf("%d ", v[i]);
    }
}

void SelectionSort(int *v, int n)
{
    int aux, indiceMenor;

    for (int i = 0; i < n - 1; i++)
    {
        indiceMenor = i; 

        for (int j = i + 1; j < n; j++)
        {
            if (v[j] < v[indiceMenor])
            {
                indiceMenor = j; 
            }
        }

        if (indiceMenor != i)
        {
            aux = v[i];
            v[i] = v[indiceMenor];
            v[indiceMenor] = aux;
        }
    }
    printf("\n%d", indiceMenor);
}

int main()
{

    int vet[tam] = {7, 4, 5, 9, 8, 2, 1};
    printf("Antes da ordenacao:\n");
    imprimir(vet, tam);

    SelectionSort(vet, tam);

    printf("\nDepois da ordenacao:\n");
    imprimir(vet, tam);

    return 0;
}
