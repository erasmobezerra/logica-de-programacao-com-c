#include <stdio.h>

int main() {

    // Declarando um vetor de inteiros com 5 posições
    int v[5];

    float m;

    // Atribuindo valor a cada posição do vetor 
    v[0] = 50;
    v[1] = 40;
    v[2] = 30;
    v[3] = 20;
    v[4] = 10;

    m = ((v[0] + v[1] + v[2] + v[3] + v[4]) / 5);

    printf("Resultado: %f\n", m);

    // Inicializando um vetor já na sua declaração
    int v2[5] = {10, 20, 30, 40, 50};    
    float soma = 0;
    float media = 0;

    for(int i=0; i<5; i++){
        soma += v[i];
    }

    media = soma / 5;

    printf("Resultado: %f\n", media);

    // Índices: Em C, os índices sempre começam em 0 e vão até (n-1), 
    // onde 'n' é o tamanho total do vetor. 
    
    // Sem Verificação de Limites: A linguagem C não verifica automaticamente 
    // se você está acessando um índice fora do intervalo do vetor (o famoso buffer overflow), 
    // o que é uma fonte comum de erros e falhas de segurança.

}
