#include <stdio.h>
#include <stdlib.h>

void main()
{

    char ch1, ch2;

    printf("Entre com duas letras:\n");

    scanf("%c %c", &ch1, &ch2);

    ch1 = ch2;

    ch2 = ch1;

    printf("ch1 = %c e ch2 = %c\n", ch1, ch2);
}