#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char *tomb=(char*)malloc(0*sizeof(char));
    int i=0;
    char string[4];
    scanf("%s", string);
    while( strcmp(string,"quit")!=0)
    {
        tomb=realloc(tomb,(i+1)*sizeof(char));
        tomb[i]=string[0];
        i++;
        scanf("%s", string);
    }
    for(int j=0; j<i; j++)
    {
        printf("%c ", tomb[j]);
    }
    free(tomb);
    return 0;
}
