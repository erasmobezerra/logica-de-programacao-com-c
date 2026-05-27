#include <stdio.h>
#include <string.h>
#include <locale.h>

#define N 50 // Definindo o tamanho máximo

int main() {
    setlocale(LC_ALL, "Portuguese");

    char hardText[N] = "/exit";
    char senha_usr[N];
    int ok;

    printf("Digite um texto:\n");
    
    // Versão segura: limita a leitura a N-1 caracteres
    if (fgets(senha_usr, N, stdin)) {
        // Remove o \n que o fgets captura
        senha_usr[strcspn(senha_usr, "\n")] = '\0';
    }

    ok = strcmp(hardText, senha_usr);

    if (ok == 0)
        printf("Textos iguais.\n");
    else
        printf("Textos diferentes.\n");

    return 0;
}