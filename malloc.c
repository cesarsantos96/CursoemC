#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p = (int *)malloc(sizeof(int));

    if (p == NULL)
    {
        printf("malloc não funcionou");
    }

    printf("%d", *p);

    free(p);
}