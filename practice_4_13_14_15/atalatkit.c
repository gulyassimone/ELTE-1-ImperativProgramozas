#include <stdio.h>
#include <stdlib.h>

char atalakit(char c)
{

    if(c>='A' && c<='Z')
    {
        c=c+32;
    }
    else if(c>='a' && c<='z')
    {
        c=c-32;
    }
    else if (c>='0' && c<='9')
    {
        c='!';
    }
    return c;
}
