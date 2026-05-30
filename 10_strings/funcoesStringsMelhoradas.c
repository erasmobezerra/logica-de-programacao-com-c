#include <stdio.h>
#include <string.h>
#include <locale.h>

int main() {
    // Configura o terminal para aceitar acentuação (conforme imagem)
    setlocale(LC_ALL, "Portuguese");

    char nome[20] = "João";
    char sobrenome[] = " Silva";
    char novoNome[30];

    //1. strncpy: copia o conteúdo de uma string para outra, garantindo que nao ultrapasse o limite restante do buffer
    // sizeof -> mede a memória total alocada em bytes de uma variável 
    strncpy(novoNome, nome, sizeof(novoNome) - 1);
    novoNome[sizeof(novoNome) - 1] = '\0'; // Garantia extra do terminador nulo

    // 2. strncat: Concatena uma string com a outra, garantindo que não ultrapasse o limite restante do buffer
    // strlen -> conta a quantidade de caracteres válidos em uma string até o o terminador nulo  '\0'
    strncat(novoNome, sobrenome, sizeof(novoNome) - strlen(novoNome) - 1);

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