#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

void tomb(int* s, int *z, int *sz);
int main()
{
    int s[SIZE]= {1,2,3,4,5}, z[SIZE]= {1,2,3,4,6}, sz[2*SIZE];
    tomb(s, z, sz);

    for(int i=0; i<2*SIZE; i++)
    {
        printf("%d ", sz[i]);
    }
    return 0;
}

void tomb(int* s, int *z, int *sz)
{
    int i=0, j=0, k=0;
    while(i<= SIZE-1 || j<= SIZE-1 )
    {
        if(j>SIZE-1 || (i<= SIZE-1 && s[i]<=z[j]))
        {
            sz[k]=s[i];
            i++;
        }
        else
        {
            sz[k]=z[j];
            j++;
        }
        k++;
    }
}
void tomb(int *sz)
{
    for(int i=0; i<2*SIZE; i++)
    {
        if(sz[i]==sz[i-1])
        {
            for()
        }
    }
}

