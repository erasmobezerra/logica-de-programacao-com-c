#include "poligonos.h"

// Para que as funções abaixo sejam reutilizadas em outros arquivos, elas devem ser declaradas em um arquivo .h
// O arquivo .h resolve isso servindo como um "manual de instruções" ou "contrato" do seu código.

float areaTriangulo(float b, float h){
    return (b * h) / 2;
}

float areaRetangulo(float b, float h){
    return b * h;
}

float areaCirculo(float r){
    return PI * r * r;
}

float areaLosango(float d1, float d2){
    return (d1 * d2) / 2;
}

