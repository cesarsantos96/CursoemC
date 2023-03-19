#include <stdio.h> // Biblioteca para entrada e saída padrão

int main()
{
    int num_int = 8;       // declara uma variável inteira e atribui o valor 10
    float num_real = 3.14; // declara uma variável de ponto flutuante e atribui o valor 3.14
    char letra = 'C';      // declara uma variável char e atribui o valor 'A'

    // Declara ponteiros para as variáveis acima e associa cada um com o endereço das variáveis usando &
    int *p_int = &num_int;
    float *p_real = &num_real;
    char *p_char = &letra;

    // Imprime os valores originais das variáveis e seus ponteiros
    printf("Valor de num_int: %d, Endereço de num_int: %p\n", num_int, p_int);
    printf("Valor de num_real: %f, Endereço de num_real: %p\n", num_real, p_real);
    printf("Valor de letra: %c, Endereço de letra: %p\n", letra, p_char);

    // Modifica o valor de cada variável usando seus respectivos ponteiros
    *p_int = 20;
    *p_real = 2.71828;
    *p_char = 'B';

    // Imprime os valores modificados das variáveis e seus ponteiros
    printf("Valor de num_int: %d, Endereço de num_int: %p\n", num_int, p_int);
    printf("Valor de num_real: %f, Endereço de num_real: %p\n", num_real, p_real);
    printf("Valor de letra: %c, Endereço de letra: %p\n", letra, p_char);

    return 0; // indica que o programa terminou com sucesso
}
