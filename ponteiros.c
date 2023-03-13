#include <stdio.h>

int main()
{
    int x = 10;
    int *p = &x;

    printf("Valor de x: %d\n", x);
    printf("Endereço de x: %p\n", &x);
    printf("Valor de p: %p\n", p);
    printf("Valor apontado por p: %d\n", *p);

    *p = 20;

    printf("Novo valor de x: %d\n", x);
    printf("Valor apontado por p: %d\n", *p);

    return 0;
}
