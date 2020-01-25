#include <stdio.h>
#include <stdlib.h>
#include "atalakit.h"

int main()
{
    char c;
    while(c!=EOF)
    {
        c=getc(stdin);
        printf("%c", atalakit(c));
    }
    return 0;
}

