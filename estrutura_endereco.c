#include <stdio.h>
#include <stdlib.h>

typedef struct tb_endereco
{
    char rua[40];
    int numero;
    char bairro[40];
    char cidade[40];
    char estado[2];
    int cep;
} endereco;

typedef struct tabela
{
    int dia;
    int mes;
    int ano;
} nascimento;

typedef struct tb_cadastro_cliente
{
    char nome_cliente[40];
    int telefone;
    endereco end;
    nascimento nasc;
} cadastro;

int main()
{

    cadastro cad_cliente[2];
    printf("\n\n --------Cadastro Clientes---------\n");
    for (int i = 0; i < 2; i++)
    {
        printf("Nome do  Cliente:");
        fflush(stdin);
        gets(cad_cliente[i].nome_cliente);

        printf("Numero do  Cliente:");
        scanf("%d", &cad_cliente[i].telefone);

        printf("Digite a rua: ");
        fflush(stdin);
        gets(cad_cliente[i].end.rua);
    }

    printf("Resultado dos clientes \n \n \n ");
    for (int i = 0; i < 2; i++)
    {
        printf("\nNome... %s", cad_cliente[i].nome_cliente);
        printf("\nTelefone... %s", cad_cliente[i].telefone);
        printf("\nRua... %s", cad_cliente[i].end.rua);
    }
}