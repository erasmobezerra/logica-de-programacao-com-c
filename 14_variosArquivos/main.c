#include <stdio.h>
#include "poligonos.h"

// Comando no CMD para compilar o main.c e o poligonos.c e executa o main
// > gcc main.c poligonos.c -o main && ./main
int main() {
    
    printf("Area do triangulo: %f\n", areaTriangulo(10, 5));
    return 0;
}