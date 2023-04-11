#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    char var1;
    char var2[30];

        var1 = getchar();
    putchar(var1);

    printf("\n");

    fflush(stdin);
    gets(var2);
    puts(var2);
}