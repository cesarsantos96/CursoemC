#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
    // comentário
    setlocale(LC_ALL, "Portuguese");

    // lendo valores inteiros

    int a = 50;
    printf(" O valor de a é = %d \n", a);
    scanf("%d", &a);
    printf(" O valor de a mudou para %d", a);

    // lendo valores decimais

    float b = 5.5;
    printf(" O valor de b é = %f \n", b);
    scanf("%f", &b);
    printf(" O valor de b mudou para %f \n", b);

    // lendo letra

    char letra = 't';
    printf(" O valor de c é = %c \n", letra);
    scanf("%c", &letra);
    printf(" O valor de b mudou para %c \n", letra);
}