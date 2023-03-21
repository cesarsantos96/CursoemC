#include <stdio.h>
#include <stdlib.h>

typedef struct Aluno
{
    int v_nmat;       // numero da matricula
    float v_notas[3]; // notas
    float V_media;    // media
} aluno;

typedef struct AlunoEsp
{
    aluno alunoR;
    float notas[4]; // notas
} alunoE;

int main()
{

    aluno Cesar;
    printf("Digite a matricula do Cesar: ");
    scanf("%d", &Cesar.v_nmat);
    printf("Digite a primeira nota do aluno: ");
    scanf("%f", &Cesar.v_notas[0]);
    printf("Digite a segunda nota do aluno: ");
    scanf("%f", &Cesar.v_notas[1]);
    printf("Digite a terceira nota do aluno: ");
    scanf("%f", &Cesar.v_notas[2]);

    Cesar.V_media = (Cesar.v_notas[0] + Cesar.v_notas[1] + Cesar.v_notas[2]) / 3.0;
    printf("Matricula:%d\n", Cesar.v_nmat);
    printf("Media:%2f\n", Cesar.V_media);

    alunoE Joao;
    printf("Digite a matricula do João: ");
    scanf("%d", &Joao.alunoR.v_nmat);
    printf("Digite a primeira nota do aluno: ");
    scanf("%f", &Joao.alunoR.v_notas[0]);
    printf("Digite a segunda nota do aluno: ");
    scanf("%f", &Joao.alunoR.v_notas[1]);
    printf("Digite a terceira nota do aluno: ");
    scanf("%f", &Joao.alunoR.v_notas[2]);
    printf("Digite a quarta nota do aluno: ");
    scanf("%f", &Joao.notas[3]);
}
