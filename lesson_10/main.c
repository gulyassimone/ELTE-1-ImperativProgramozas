#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int length(char *nev);
void fordit(int *tomb, int size);
int main()
{
    char *nev="valami";
    printf("%d \n", length(nev));
    int tomb[]= {1,2,3,4,5,6,7};
    int size=sizeof(tomb)/sizeof(tomb[0]);
    fordit(tomb, size);

    return 0;
}
int length(char *nev)
{
    int i=0;
    while(*(nev+i)!='\0')
    {
        i++;
    }
    return i+1;
}
void fordit(int *tomb, int size)
{
    for(int i=0; i<size/2; i++)
    {
        int temp=*(tomb+i);
        *(tomb+i)=*(tomb+size-1-i);
        *(tomb+size-1-i)=temp;
    }
    for(int i=0; i<size; i++)
    {
        printf("%d ", *(tomb+i));
    }
    printf("\n");
}
