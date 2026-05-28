#include <stdio.h> // Biblioteca padrão de entrada e saída
#include <stdlib.h> // Biblioteca padrão de utilidades (para system("clear") ou system("cls"))
#include <locale.h> // Biblioteca para configuração de localidade (para suporte a acentos e caracteres especiais)

#define TAM 3

// Structs (Registros) 
// É um tipo de dado personalizado que permite agrupar várias variáveis de tipos 
// diferentes sob um mesmo nome. É usada para representar objetos do mundo real 
// que possuem múltiplas propriedades.
struct tipo_pessoa{
    int idade;
    float peso;
    char nome[50];
};

// Definindo um tipo de dado personalizado usando typedef para facilitar a declaração de variáveis do tipo struct
typedef struct tipo_pessoa tipo_pessoa;

// Função para limpar o buffer do teclado
void clearBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int main(){
    setlocale(LC_ALL, "Portuguese");

    //Criando e inicializando
    tipo_pessoa lista[TAM];

    for (int i = 0; i < TAM; i++)
    {
        printf("Insira os dados (%d):\n", i+1);
        puts("Nome: ");
        scanf("%49[^\n]", lista[i].nome); // Lê uma string com espaços, limitando a leitura a 49 caracteres para evitar overflow
        clearBuffer(); // Limpar o buffer do teclado para evitar problemas com a leitura de strings

        puts("Idade: ");
        scanf("%d", &lista[i].idade);
        clearBuffer();

        puts("Peso: ");
        scanf("%f", &lista[i].peso);
        clearBuffer();
    }

    // system("cls"); // Limpar a tela (Windows)
    system("clear"); // Limpar a tela (Linux)

    puts("Dados inseridos:\n");
    for (int i = 0; i < TAM; i++)
    {
        printf("Pessoa %d:\n", i+1);
        printf("Nome: %s\n", lista[i].nome);
        printf("Idade: %d\n", lista[i].idade);
        printf("Peso: %.2f\n\n", lista[i].peso);
    }






}