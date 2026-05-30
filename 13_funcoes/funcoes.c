#include <stdio.h>

// Funções e Procedimentos em C

// São blocos de códigos que realizam tarefas específicas e podem ser reutilizados em diferentes partes do programa.

// Procedimentos -> funções com ou sem parâmetros, e sem retorno
// Funções -> funções com ou sem parâmetros mas com retorno

// Procedimento sem parâmetro e sem retorno
void funcaoSimples() {
    printf("Esta é uma função simples sem parâmetros e sem retorno.\n");
}

// Procedimento com parâmetros e sem retorno
void funcaoComParametros(int a, float b) {
    printf("Esta função recebe dois parâmetros: a = %d e b = %.2f\n", a, b);
}

// Função com parâmetros e com retorno
int funcaoComRetorno(int x) {
    return x * x; // Retorna o quadrado de x
}

// Função sem parâmetro e com retorno
float pi(){
    return 3.14;
}


int main(){
    
    funcaoSimples();
    funcaoComParametros(10, 5.5);

    int resultado = funcaoComRetorno(5);
    printf("O quadrado de 5 é: %d\n", resultado);

    float p = pi();
    printf("O valor de pi é: %.2f\n", p);

    return 0;   
}

