#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    FILE *file;
    file = fopen("arquivoler.txt", "r");

    int a, b;

    fscanf(file, "%i %i", &a, &b);
    printf("%i %i ", a, b);
}