#include <stdio.h>
#define PI 3.14159 // Constante

int main() {
    
    int idade = 0; // Variável do tipo inteiro
    float salario = 0.0; // Variável do tipo float
    char letra = ""; // Variável do tipo char (caractere)
    char nome[50] = ""; // Variável do tipo string (array de caracteres)
    
    printf("Digite sua idade: ");
    scanf("%d", &idade); // Atribuição de valor à variável idade

    printf("Digite seu salário: ");
    scanf("%f", &salario); // Atribuição de valor à variável salario

    printf("Digite uma letra: ");
    scanf(" %c", &letra); // Atribuição de valor à variável letra

    printf("Digite seu nome: ");
    scanf("%49s", nome); // Atribuição de valor
    
    // Saída dos valores digitados
    printf("\nIdade: %d\n", idade);
    printf("Salário: %.2f\n", salario);
    printf("Letra: %c\n", letra);
    printf("Nome: %s\n", nome);
    printf("Valor de PI: %.5f\n", PI); // Exemplo de uso da constante PI

    return 0;
}