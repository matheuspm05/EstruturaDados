#include <stdio.h>

int multiplica(int a, int b) {
    
    if (b == 0) {
        return 0;
    }
    return a + multiplica(a, b - 1);
}

int main() {
    int a, b;

    printf("Digite dois inteiros positivos: ");
    scanf("%d %d", &a, &b);

    
   printf("Resultado: %d\n", multiplica(a, b));
  

    return 0;
}
