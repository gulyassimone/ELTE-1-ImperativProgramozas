#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int add(char *tomb);
int main()
{
    char tomb[]="  Hello  world valami hami emi!";
    printf("%d", add(tomb));
    return 0;
}
int add(char *tomb)
{
    int db=1;
    for(int i=1; i<strlen(tomb); i++)
    {
        if(tomb[i]==' ' && tomb[i-1]!=' ')
        {
            db++;
        }
    }
    return db;
}
