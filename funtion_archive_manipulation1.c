#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    FILE *arquivo;
    arquivo = fopen("arquivoNovo.txt", "w");
    fprintf(arquivo, "Colocando o texto no arquivo");
}