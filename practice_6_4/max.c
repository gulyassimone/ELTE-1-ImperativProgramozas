#include <stdio.h>
#include <stdlib.h>

int max(int *tomb, int size)
{
    int max=tomb[0];
    for(int i=0; i<size;i++)
    {
        if(max<tomb[i])
        {
            max=tomb[i];
        }
    }
    return max;
}
