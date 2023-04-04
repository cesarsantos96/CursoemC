#include <stdio.h>
#include <stdlib.h>

typedef struct aluno
{
    char nome[30];
    float nota[2];
    float media;
} aluno;

aluno receberDados()
{
    aluno a;
    printf("Digite o nome do aluno \n");
    gets(a.nome);
    printf("Digite a primeira nota do aluno \n");
    scanf("%f", &a.nota[0]);
    printf("Digite a segunda nota do aluno \n");
    scanf("%f", &a.nota[1]);
    printf("Digite a terceira nota do aluno \n");
    scanf("%f", &a.nota[2]);

    return a;
}

void imprimirDados(aluno a)
{
    printf("--------DADOS DO ALUNO---------");
    printf("Nome do aluno(a) é: %s\n", a.nome);
    printf("A primeira nota foi: %2.f\n", a.nota[0]);
    printf("A segunda nota foi: %2.f\n", a.nota[1]);
    printf("A terceira nota foi: %2.f\n", a.nota[2]);
    a.media = (a.nota[0] + a.nota[1] + a.nota[2]) / 3;
    printf(" A media do aluno foi %2.f\n", a.media);
}

void situacao(aluno a)
{
    if (a.media < 7)
    {
        printf("Aluno está reprovado");
    }
    else
    {
        printf("Aluno está está reprovado");
    }
}

int main()
{
    aluno cesar;
    cesar = receberDados();
    imprimirDados(cesar);
    situacao(cesar);
}