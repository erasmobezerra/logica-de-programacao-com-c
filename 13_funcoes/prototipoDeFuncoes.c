#include <stdio.h>

// Protótipos das funções
// Protótipos de funções são declarações antecipadas das funções que serão definidas posteriormente no código.
// Eles informam ao compilador sobre a existência de uma função, seu nome, tipo de retorno e os tipos de seus parâmetros, permitindo que as funções sejam chamadas antes de serem definidas.
// Em casos hoje há dezenas de funções, os protótipos ajudam a organizar o código e evitar erros de compilação relacionados à ordem das definições das funções.
void funcaoSimples();
void funcaoComParametros(int a, float b);
int funcaoComRetorno(int x);

int main(){
    funcaoSimples();
    funcaoComParametros(10, 5.5);
    int resultado = funcaoComRetorno(5);
    printf("O quadrado de 5 é: %d\n", resultado);

    return 0;   
}

// Funções sem parâmetros e sem retorno
void funcaoSimples() {
    printf("Esta é uma função simples sem parâmetros e sem retorno.\n");
}

// Função com parâmetros e sem retorno
void funcaoComParametros(int a, float b) {
    printf("Esta função recebe dois parâmetros: a = %d e b = %.2f\n", a, b);
}

// Função com parâmetros e com retorno
int funcaoComRetorno(int x) {
    return x * x; // Retorna o quadrado de x
}