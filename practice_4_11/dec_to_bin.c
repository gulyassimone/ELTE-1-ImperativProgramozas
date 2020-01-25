#include <stdio.h>
#include <stdlib.h>

void dec_to_bin(int n)
{
    int t[64];
    int i=0;
    while(n>0)
    {
        t[i]=n%2;
        n/=2;
        i++;
    }
    for(int j=i-1; j>=0;j--)
    {
        printf("%d", t[j]);
    }
}
