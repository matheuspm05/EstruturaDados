#include <stdio.h>
#define n 5

int main(void) {
    for (int i = 0; i < n; i++) {
        // espaços antes dos pontos
        for (int esp = 0; esp < n - i - 1; esp++) {
            printf(" ");
        }
        // pontos
        for (int j = 0; j <= i; j++) {
            printf(". ");
        }
        printf("\n");
    }
    return 0;
}
