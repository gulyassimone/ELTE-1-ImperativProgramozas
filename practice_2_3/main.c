#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char nev[10];
    while(strcmp(nev, "quit")!=0)
    {
        scanf("%s", nev);
    }
    return 0;
}
