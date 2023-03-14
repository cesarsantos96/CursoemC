#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 10;
    float y = 5.5;

    int *ponteiroX = &x;

    float *ponteiroY = &y;

    printf("Endereço de X = %d - Valor X = %d", ponteiroX, *ponteiroX);
    printf("Endereço de Y = %d - Valor Y = %f", ponteiroY, *ponteiroY);
    printf("Valor soma: %f\n", soma);
}

// Ponteiro é uma variável cujo conteúdo é um endereço de memória