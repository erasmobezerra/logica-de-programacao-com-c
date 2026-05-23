// Estrutura de controle continue em C
#include <stdio.h>

int main() {
    for (int i = 1; i <= 10; i++) {
        if (i == 5) {
            continue; // Pula a iteração quando i for igual a 5
        }
        printf("Iteração: %d\n", i);
    }

    return 0;
}
