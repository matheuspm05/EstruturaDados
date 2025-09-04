#include <stdio.h>
#define N 100

int main() {
    for (int i = 0; i < N; i++) {
        int val = 1; // primeiro número sempre 1
        for (int k = 0; k <= i; k++) {
            printf("%d", val); // sem espaço
            val = val * (i - k) / (k + 1); // próximo valor
        }
        printf("\n");
    }
    return 0;
}
