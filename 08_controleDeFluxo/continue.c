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

// O continue é usado para pular a iteração atual de um loop e continuar com a próxima iteração.
// Assim como o break, o continue também só afeta o loop onde ele está diretamente contido. 

