#include <stdio.h>

void fflushLinux() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int main(){

    char s[10];

    printf("Digite algo (scanf convencional)\n");
    scanf("%s", s); // sintaxe geral (sem limite de caracteres + sem leitura depois do espaço)  
    fflushLinux();  // limpar o buffer do teclado -> funciona no Linux e Windows 
    printf("Resultado: %s\n\n", s); // Para leitura de array de caracteres, não é necessário & antes do nome da variavel

    printf("Digite algo (scanf aprimorado):\n");
    scanf("%9[^\n]", s); // sintaxe aprimorada (tamanho máximo da string + leitura do que vem depois do espaço)    
    fflushLinux();

    printf("Resultado: %s\n\n", s);
}

