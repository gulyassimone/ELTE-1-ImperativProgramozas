#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* csere(char * nev)
{
    for(int i=strlen(nev)-1; i>=0; i--)
    {
        printf("%c", nev[i]);
    }
    return nev;
}
