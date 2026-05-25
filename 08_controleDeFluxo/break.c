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

// Só interrompe o loop onde ele está diretamente contido.
// Se você tiver um loop dentro de outro (loop aninhado), 
// o break dentro do loop interno sairá apenas dele, e o 
// loop externo continuará rodando normalmente.