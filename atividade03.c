#include <stdio.h> // Biblioteca para entrada e saída padrão

int main()
{
    int num1, num2; // declara duas variáveis inteiras

    printf("Digite o valor de num1: ");
    scanf("%d", &num1); // lê o valor de num1 do teclado

    printf("Digite o valor de num2: ");
    scanf("%d", &num2); // lê o valor de num2 do teclado

    // Compara os endereços das variáveis e exibe o conteúdo do maior
    if (&num1 > &num2)
    {
        printf("Conteúdo do endereço de num1 é maior: %d\n", *(&num1));
    }
    else
    {
        printf("Conteúdo do endereço de num2 é maior: %d\n", *(&num2));
    }

    return 0; // indica que o programa terminou com sucesso
}
