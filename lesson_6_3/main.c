#include <stdio.h>
#include <string.h>

/* A standard input-ról olvassál be egy szöveget egy megfelelő változóba! Hasonlítsd össze, 
hogy a beolvasott string, a főprogramba beégetett jelszóval megegyezik-e! Írd ki az eredményt 
a standard output-ra! */


int main()
{
    char *str1 = "hello";
    char *str2;

     scanf("%s", str2);
    if(0== strcmp(str1, str2))
    {
        printf("Equals");
    }
    else
    {
        printf("not Equals");
    }

    return 0;
}
