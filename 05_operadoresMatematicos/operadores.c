
#include <stdio.h>

int main() {

    // Operadores matemáticos en C
    int a = 10, b = 5;
    
    // Operadores de adição, subtração, multiplicação e divisão
    printf("Adição: %d + %d = %d\n", a, b, a + b);
    printf("Subtração: %d - %d = %d\n", a, b, a - b);
    printf("Multiplicação: %d * %d = %d\n", a, b, a * b);
    printf("Divisão: %d / %d = %d\n", a, b, a / b);
    
    // Operador de módulo (resto da divisão)
    printf("Módulo: %d %% %d = %d\n", a, b, a % b);

    // Operadores de incremento e decremento
    a++; // Incrementa a em 1
    b--; // Decrementa b em 1
    printf("Após incremento e decremento: a = %d, b = %d\n", a, b);

    // Operadores de atribuição
    a += 5; // Equivalente a a = a + 5
    b *= 2; // Equivalente a b = b * 2
    printf("Após operadores de atribuição: a = %d, b = %d\n", a, b);

    // Operadores de comparação
    printf("Igualdade: a == b: %d\n", a == b); // Igualdade
    printf("Diferença: a != b: %d\n", a != b); // Diferença
    printf("Maior: a > b: %d\n", a > b);   // Maior
    printf("Menor: a < b: %d\n", a < b);   // Menor
    printf("Maior ou igual: a >= b: %d\n", a >= b); // Maior ou igual
    printf("Menor ou igual: a <= b: %d\n", a <= b); // Menor ou igual
    
    // Operadores lógicos
    int x = 1, y = 0;
    printf("Operador lógico de conjunção:  x && y: %d\n", x && y); // E lógico
    printf("Operador lógico de disjunção:  x || y: %d\n", x || y); // Ou lógico
    printf("Operador lógico de negação:  !x: %d\n", !x);         // Negação lógica   


    return 0;
}