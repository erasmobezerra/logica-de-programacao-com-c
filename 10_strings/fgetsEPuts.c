#include <stdio.h>

// Função para limpar o buffer do teclado, evitando problemas com a leitura de strings depois da leitura de outros tipos de dados
void clearBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int main(){

    char s[10];
   
    // A função gets() tentará ler tudo o que o usuário digitar até encontrar um Enter.
    printf("Digite algo(leitura pelo gets):\n");
    gets(s);
    clearBuffer();

    // puts -> é uma forma simples de imprimir uma string no console. O \n já está incluso
    puts("Resultado:");
    puts(s);
    puts("");

    // função fgets() foi projetada para corrigir as falhas da gets(), exigindo que você especifique o tamanho máximo do buffer (string) de destino.
    // No fgets(), o 1º argumento é o buffer (string), o 2º argumento eh o tamanho do buffer e o 3º eh o stdin (teclado)
    printf("Digite algo(leitura pelo fgets):\n");    
    fgets(s, 10, stdin);
    clearBuffer();
    
    puts("Resultado:");
    puts(s);
}