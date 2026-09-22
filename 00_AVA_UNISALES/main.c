#include <stdio.h>

int main(void) {
    double precosPapelaria[3][2] = {
        {15.0, 12.5},
        {13.0, 7.5},
        {100.0, 97.0}
    };

    double soma = 0.0;
    double mediaPrecos[3];
    double somaMaterial01[3];

    int linhas = sizeof(precosPapelaria) / sizeof(precosPapelaria[0]);
    int colunas = sizeof(precosPapelaria[0]) / sizeof(precosPapelaria[0][0]);

    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            soma += precosPapelaria[i][j];
        }
        somaMaterial01[i] = soma;
        mediaPrecos[i] = somaMaterial01[i] / 2.0;
        soma = 0.0;
    }

    for (int i = 0; i < 3; i++) {
        printf("%.2f ", mediaPrecos[i]);
    }
    printf("\n");

    return 0;
}