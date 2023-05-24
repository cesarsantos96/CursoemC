#include <stdio.h>
#include <stdlib.h>
typedef struct NO // Estrutura do No
{
    int data;
    struct NO *next;
} NO;

typedef struct FILA // Estrutura da Fila
{
    NO *incio;
    NO *fim;

} FILA;

FILA *criarFila()
{
    FILA *fila = (FILA *)malloc(sizeof(FILA));
    fila->incio = NULL;
    fila->fim = NULL;

    return fila;
}

int isEmpty(FILA *fila)
{
    return (fila->incio == NULL);
}

void enqueue(FILA *fila, int data)
{
}