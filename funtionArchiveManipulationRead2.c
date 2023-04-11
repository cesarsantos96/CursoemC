#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    FILE *file;
    file = fopen("arquivoler.txt", "r");

    fprintf(file, "\nTestando");
}