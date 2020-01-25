#include <stdio.h>
#include <stdlib.h>

void kiir()
{
    int C;
    while(C!=EOF)
    {
        putchar(C);
        C = getchar();
    }
}
