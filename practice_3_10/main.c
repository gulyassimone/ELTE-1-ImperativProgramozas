#include <stdio.h>
#include <stdlib.h>

int main()
{
    int C;

    C = getchar();

    while(C!=EOF)
    {
        putchar(C);
        C = getchar();
    }
    return 0;
}
