#include <stdio.h>
#include <stdlib.h>

int main()
{

    typedef int x;
    typedef float y;

    x var1 = 10;
    y var2 = 5.5;
    x var3 = 5;
    x var4 = 77;

    printf("%d \n  %d \n %d \n", var1, var3, var4);

    printf("%f \n", var2);
};