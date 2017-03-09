#include <stdio.h>
#include <stdlib.h>
#include "cs50.h"
int main(void)
{
    int a = 0,b, i ;
    printf("Digite um numero\n");
    b = GetInt();
    if (b == 6)
        for (i = 1; i <= b; i++)
        {
            a += 5;
            printf("%d ", a);
        }
    else
        for (i = 0; i <= 0; i++)
        {
            a += 5;
            printf("%d", a);
        }
    return 0;
}

