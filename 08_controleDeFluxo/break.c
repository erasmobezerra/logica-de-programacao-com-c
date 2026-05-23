// Estrutura de controle break em C
#include <stdio.h>

int main() {
    for (int i = 1; i <= 10; i++) {
        if (i == 5) {
            break; // Interrompe o loop quando i for igual a 5
        }
        printf("Iteração: %d\n", i);
    }

    return 0;
}
