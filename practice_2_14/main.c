#include <stdio.h>
#include <stdlib.h>

int main()
{
    int szam,t;
    scanf("%d", &szam);
    int r=0;
    t=szam;
    while(t!=0)
    {
        r*=10;
        r+=t%10;
        t/=10;
    }
    printf(szam==r?"palindrom":"nem palindrom");

    return 0;
}
