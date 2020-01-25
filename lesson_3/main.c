#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name[]="Gulyas Simone";
    printf("Hello %s\n", name);
    for(int i=0; i<sizeof(name)/2; i++)
    {
        char temp;
        temp=name[i];
        name[i]=name[sizeof(name)-1-i];
        name[sizeof(name)-1-i]=temp;
    }
    for(int i=0; i<sizeof(name); i++)
    {
        printf("%c", name[i]);
    }
    return 0;
}
