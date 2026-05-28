#include <stdio.h>
#include <string.h>
#include <locale.h>

int main() {
    // Configura o terminal para aceitar acentuação (conforme imagem)
    setlocale(LC_ALL, "Portuguese");

    char nome[20] = "João";
    char sobrenome[] = " Silva";
    char novoNome[30];

    // 1. strcpy: Copia "João" para novoNome
    strcpy(novoNome, nome);
    printf("Primeiro nome: %s\n", novoNome);

    // 1. strncpy: Copia no máximo (sizeof(novoNome) - 1) para garantir espaço para o '\0'
    //strncpy(novoNome, nome, size of(novoNome) - 1);
    //novoNome[sizeof(novoNome) - 1] = '\0'; // Garantia extra do terminador nulo

    // 2. strcat: Junta " Silva" ao final de novoNome
    strcat(novoNome, sobrenome);
    printf("Nome completo: %s\n", novoNome);

    // 2. strncat: Concatena, garantindo que não ultrapasse o limite restante do buffer
    // Calculamos o espaço que sobra subtraindo o tamanho atual do total
    //strncat(novoNome, sobrenome, sizeof(novoNome) - strlen(novoNome) - 1);

    // 3. strlen: Calcula o tamanho do nome completo
    printf("O tamanho do nome completo é: %zu caracteres.\n", strlen(novoNome));

    // 4. strcmp: Compara se o nome é igual a "João Silva"
    if (strcmp(novoNome, "João Silva") == 0) {
        printf("Verificação: O nome está correto!\n");
    } else {
        printf("Verificação: O nome está diferente.\n");
    }

    return 0;
}