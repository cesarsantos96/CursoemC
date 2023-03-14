#include <stdio.h>
#include <stdlib.h>

struct endereco
{

    char rua[50];
    int numero;
    int CEP;
    char bairro[30];
};

int main()
{
    struct endereco unimeta = {"Rua da Estacio", 10, 699999, "Bairro da Estacio"};

    printf("%s", unimeta.rua);
}