#include <stdio.h>
#include <stdlib.h>

int somaValor(int x)
{
    return x = +1;
}

void somaReferencia(int *x)
{
    *x = *x + 1;
}

int main()
{
    int x = 5;
    somaValor(x);
    printf("%d\n", x);

    int y = 5;
    somaReferencia(&y);
    printf("%d\n", y);
}