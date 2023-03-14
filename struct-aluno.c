#include <stdio.h>
#include <stdlib.h>

struct Aluno
{
    int matricula;
    float notas[3];
    float media;
};

int main()
{

    struct Aluno cesar;

    cesar.matricula = 202203;
    cesar.notas[0] = 7;
    cesar.notas[1] = 7.5;
    cesar.notas[2] = 9.5;
    cesar.media = (cesar.notas[0] + cesar.notas[1] + cesar.notas[2]) / 3;

    printf("media: %f", cesar.media);
}