#include <stdio.h>
#include <stdlib.h>

typedef struct aluno
{
    char nome[30];
    char curso[30];
    float nota[3];
    float media;
} aluno;

aluno receberDados()
{
    aluno a;
    printf("Digite o nome do aluno \n");
    fflush(stdin);
    gets(a.nome);
    printf("Digite o nome do Curso \n");
    fflush(stdin);
    gets(a.curso);
    printf("Digite a primeira nota do aluno \n");
    scanf("%f", &a.nota[0]);
    printf("Digite a segunda nota do aluno \n");
    scanf("%f", &a.nota[1]);
    printf("Digite a terceira nota do aluno \n");
    scanf("%f", &a.nota[2]);
    printf("Digite a terceira nota do aluno \n");
    scanf("%f", &a.nota[3]);
    printf(" A media do aluno foi %2.f\n", a.media);

    return a;
}
void imprimirDados(aluno a)
{
    printf("--------DADOS DO ALUNO---------");
    printf("Nome do aluno(a) é: %s\n", a.nome);
    printf("Nome do curso é: %s\n", a.curso);
    printf("A primeira nota foi: %2.f\n", a.nota[0]);
    printf("A segunda nota foi: %2.f\n", a.nota[1]);
    printf("A terceira nota foi: %2.f\n", a.nota[2]);
    printf("A quarta nota foi: %2.f\n", a.nota[3]);
    a.media = (a.nota[0] + a.nota[1] + a.nota[2] + a.nota[3]) / 4.0;
}

void situacao(aluno a)
{
    if (a.media < 6.0)
    {
        printf("\nAluno está Reprovado\n");
    }
    else
    {
        printf("\nAluno está Aprovado\n");
    }
}

int main()
{
    aluno cesar;
    cesar = receberDados();
    imprimirDados(cesar);
    situacao(cesar);
}
