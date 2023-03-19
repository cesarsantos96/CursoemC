#include <stdio.h> // Biblioteca para entrada e saída padrão

int main()
{
    int num1 = 10; // declara a primeira variável inteira e atribui o valor 10
    int num2 = 20; // declara a segunda variável inteira e atribui o valor 20

    // Compara os endereços das variáveis e exibe o maior
    if (&num1 > &num2)
    {
        printf("Endereço de num1 é maior: %p\n", &num1);
    }
    else
    {
        printf("Endereço de num2 é maior: %p\n", &num2);
    }

    return 0; // indica que o programa terminou com sucesso
}
