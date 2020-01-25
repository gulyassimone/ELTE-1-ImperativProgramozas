#include <stdio.h>
#include <stdlib.h>
#include "fordito.h"


int main()
{
    int c;
    while(c!='\n')
    {
        c=getc(stdin);
        putchar(fordito(c));

    }
    return 0;
}
