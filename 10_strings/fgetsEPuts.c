#include <stdio.h>

void clearBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int main(){

    char s[10];
   
    // A função gets() lê uma linha da entrada padrão (stdin) até encontrar uma quebra de linha ou o fim do arquivo.
    // A função gets() tentará ler tudo o que o usuário digitar até encontrar um Enter.
    printf("Digite algo(leitura pelo gets):\n");
    gets(s);
    clearBuffer();

    // puts -> é uma forma simples de imprimir uma string no console. O \n já está incluso
    puts("Resultado:");
    puts(s);
    puts("");

    // função fgets() foi projetada para corrigir as falhas da gets(), exigindo que você especifique o tamanho máximo do buffer de destino.
    printf("Digite algo(leitura pelo fgets):\n");    
    fgets(s, 10, stdin);
    clearBuffer();
    
    puts("Resultado:");
    puts(s);
}