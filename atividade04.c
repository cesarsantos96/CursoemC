#include <stdio.h>

int main()
{
    int a, *b, c;
    a = 5;
    b = &a;
    c = 10;

    scanf("%d", b);
    printf("%d %dn\", a,c);
}