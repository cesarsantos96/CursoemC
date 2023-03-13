#include <stdio.h>
#include <stdlib.h>

// Definindo a estrutura de dados
struct Pessoa
{
    char nome[50];
    int idade;
    float altura;
};

int main()
{
    // Criando uma variável do tipo Pessoa
    struct Pessoa pessoa1;

    // Atribuindo valores aos campos da estrutura
    printf("Digite o nome da pessoa: ");
    scanf("%s", pessoa1.nome);

    printf("Digite a idade da pessoa: ");
    scanf("%d", &pessoa1.idade);

    printf("Digite a altura da pessoa: ");
    scanf("%f", &pessoa1.altura);

    // Imprimindo os valores dos campos da estrutura
    printf("\nDados da pessoa:\n");
    printf("Nome: %s\n", pessoa1.nome);
    printf("Idade: %d anos\n", pessoa1.idade);
    printf("Altura: %.2f metros\n", pessoa1.altura);

    return 0;
}
