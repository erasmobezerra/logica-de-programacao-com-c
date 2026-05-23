#include <stdio.h>
#include <stdlib.h>

int main()
{
    int inteiro;
    float real;
    char caractere;
    char string[100];

    printf("Digite um valor inteiro: ");
    scanf("%d", &inteiro);

    printf("Digite um valor real: ");
    scanf("%f", &real);

    printf("Digite um caractere: ");
    scanf(" %c", &caractere); // Note the space before %c to consume any leftover newline

    printf("Digite uma string: ");
    scanf("%s", string); // No need for & since string is an array

    printf("\nValores digitados:\n");
    printf("Valor inteiro: %d\n", inteiro);
    printf("Valor real: %.2f\n", real);
    printf("Valor de caractere: %c\n", caractere);
    printf("Valor de string: %s\n", string);
}