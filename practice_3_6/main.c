#include <stdio.h>
#include <stdlib.h>

int prim(int a);
int main()
{
    int szam;
    scanf("%d", &szam);
    printf(prim(szam)?"prim":"nem prim");
    return 0;
}

int prim(int a)
{
    int i=2;
    while( i<=a/2 && a%i!=0 )
    {
      i++;
    }
    return i<=a/2?0:1;
}
