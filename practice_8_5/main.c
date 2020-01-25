#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char tomb[]="ALma:korte:B4r4ck:szilva:D10";
    char *pch;
    pch = strtok(tomb, ":");
    while(pch!=0)
    {
        if(isupper(*pch)&&isalnum(*pch))
        {
            printf("%s\n", pch);
        }
        pch=strtok(NULL, ":");
    }
    return 0;
}
