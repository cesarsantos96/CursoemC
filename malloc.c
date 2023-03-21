#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p = (int *)malloc(sizeof(int));

    if (p == NULL)
    {
        printf("malloc não funcionou");
    }

    *p = 42; // atribui um valor à localização de memória

    printf("%d", *p);

    free(p);
}
