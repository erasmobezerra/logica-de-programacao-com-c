#include <stdio.h>

// Funções em C

// Função é um bloco de código que realiza uma tarefa específica e pode ser reutilizado em diferentes partes do programa.

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


int main(){
    funcaoSimples();
    funcaoComParametros(10, 5.5);
    int resultado = funcaoComRetorno(5);
    printf("O quadrado de 5 é: %d\n", resultado);

    return 0;   
}

