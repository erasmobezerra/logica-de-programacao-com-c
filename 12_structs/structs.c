#include <stdio.h>
#include <string.h>
#include <locale.h>

#define TAM 50


// Structs (Registros) 
// É um tipo de dado personalizado que permite agrupar várias variáveis de tipos 
// diferentes sob um mesmo nome. É usada para representar objetos do mundo real 
// que possuem múltiplas propriedades.

struct tipo_pessoa{
    int idade;
    float peso;
    char nome[TAM];
};

typedef struct tipo_pessoa tipo_pessoa;

int main(){
    setlocale(LC_ALL, "Portuguese");

    //Criando e inicializando
    tipo_pessoa pes = {0, 0.0, "Teste"};

    printf("Início:\n");
    printf("pes.idade: %d\n", pes.idade);
    printf("pes.peso: %.2f\n", pes.peso);
    printf("pes.nome: %s\n", pes.nome);

    // Solicitando inserções via teclado
    printf("\nInsira um número interio:\n");
    scanf("%d", &pes.idade);

    printf("\nInsira um número real:\n");
    scanf("%f", &pes.peso);

    printf("\nInsira uma palavra:\n");
    scanf("%s", &pes.nome);

    printf("\nAlterando com dados do usuários:\n");
    printf("pes.idade: %d\n", pes.idade);
    printf("pes.peso: %.2f\n", pes.peso);
    printf("pes.nome: %s\n", pes.nome);


}