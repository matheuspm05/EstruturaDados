#include <stdio.h>
#define TAMANHO 5


int multiplica(int a, int b) {
    if (b == 0) {
        return 0;
    }
    return a + multiplica(a, b - 1);
}

int maiorElemento(int *v, int tam) {
    if (tam == 1) {
        return v[0];
    }

    int maior = maiorElemento(v, tam - 1);

    if (v[tam - 1] > maior) {
        return v[tam - 1];
    } else {
        return maior;
    }
}

int main() {
    int a, b;
    int vetor[TAMANHO] = {1, 2, 3, 20, 5};

    
    printf("Digite dois inteiros positivos para multiplicar: ");
    scanf("%d %d", &a, &b);
    printf("Resultado da multiplicacao: %d\n", multiplica(a, b));

    
    printf("Maior elemento do vetor: %d\n", maiorElemento(vetor, TAMANHO));

    return 0;
}
