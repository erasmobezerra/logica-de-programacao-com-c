#include <stdio.h>

int main()
{

    // ****************************************************
    // ATRIBUIÇÃO DE REFERÊNCIA A UM PONTEIRO
    // ****************************************************
    int qtd_alunos = 1250;

    int *ponteiroQtd_alunos = &qtd_alunos;

    printf("A variavel idade vale %d.\n", qtd_alunos);
    printf("O ponteiro acessando o valor da variavel vale %d.\n", *ponteiroQtd_alunos);
    printf("O ponteiro acessando o endereco da variavel vale %p\n", ponteiroQtd_alunos); 
    
    // *****************************************************************************
    // OPERAÇÕES DE SOMA E SUBTRAÇÃO DE ENDEREÇOS DE MEMÓRIA COM PONTEIROS
    // *****************************************************************************
    int valor1;
    int *pValor1;
    char valor2;
    char *pValor2;

    pValor1 = &valor1;
    pValor2 = &valor2;

    printf ("Endereco de pValor1 = %p\n", pValor1);
    pValor1++; //VAI SOMAR 4 BYTES NA MEMÓRIA PARA ESSA VARIÁVEL

    printf ("Endereco novo de pValor1 = %p\n", pValor1);

    printf ("Endereco de pValor2 = %p\n", pValor2);
    pValor2++; //VAI SOMAR 1 BYTE NA MEMÓRIA PARA ESSA VARIÁVEL

    printf ("Endereco novo de pValor2 = %p\n", pValor2);
    

    return 0;
}
