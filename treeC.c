#include <stdio.h>
#include <stdlib.h>

// Definindo a estrutura do nó da árvore
typedef struct no
{
    int valor;
    struct no *esquerda;
    struct no *direita;
} No;

// Função para criar um novo nó com um valor especificado
No *criarNo(int valor)
{
    // Alocando memória para o novo nó
    No *novoNo = (No *)malloc(sizeof(No));
    // Definindo o valor do nó
    novoNo->valor = valor;
    // Definindo os filhos esquerdo e direito como nulos
    novoNo->esquerda = NULL;
    novoNo->direita = NULL;
    // Retornando o novo nó criado
    return novoNo;
}

// Função para inserir um valor na árvore
No *inserir(No *raiz, int valor)
{
    // Verificando se a raiz é nula
    if (raiz == NULL)
    {
        // Criando um novo nó com o valor especificado
        return criarNo(valor);
    }
    // Verificando se o valor é menor do que o valor da raiz
    if (valor < raiz->valor)
    {
        // Inserindo o valor na subárvore esquerda recursivamente
        raiz->esquerda = inserir(raiz->esquerda, valor);
    }
    else if (valor > raiz->valor)
    {
        // Inserindo o valor na subárvore direita recursivamente
        raiz->direita = inserir(raiz->direita, valor);
    }
    // Retornando a raiz atualizada
    return raiz;
}

// Função para percorrer a árvore em ordem
void percorrerEmOrdem(No *raiz)
{
    // Verificando se a raiz não é nula
    if (raiz != NULL)
    {
        // Percorrendo a subárvore esquerda
        percorrerEmOrdem(raiz->esquerda);
        // Imprimindo o valor do nó atual
        printf("%d ", raiz->valor);
        // Percorrendo a subárvore direita
        percorrerEmOrdem(raiz->direita);
    }
}

// Função para criar uma árvore vazia
No *criarArvore()
{
    return NULL;
}

int main()
{
    // Criando a raiz da árvore
    No *raiz = criarArvore();

    // Inserindo elementos na árvore
    raiz = inserir(raiz, 50);
    raiz = inserir(raiz, 70);
    raiz = inserir(raiz, 100);
    raiz = inserir(raiz, 10);
    raiz = inserir(raiz, 35);
    raiz = inserir(raiz, 40);

    // Imprimindo os elementos da árvore em ordem
    printf("Elementos em ordem: ");
    percorrerEmOrdem(raiz);

    return 0;
}
