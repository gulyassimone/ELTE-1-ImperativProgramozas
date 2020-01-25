#include <stdio.h>
#include <stdlib.h>

int main()
{
    for(char i='a'; i<='z'; i++)
    {
        printf("%c \t 0x%x \n", i, i);
    }
    return 0;
}
