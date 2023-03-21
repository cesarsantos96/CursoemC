#include <stdio.h>
#include <stdlib.h>

struct departamento
{
    int codd;
    char descricaod[30];
};

struct cargo
{
    int codc;
    char descricaod[30];
};

struct funcionario
{
    int codf;
    char nome[30];
    float salario;
    struct departamento dep;
    struct cargo cargo;
};
