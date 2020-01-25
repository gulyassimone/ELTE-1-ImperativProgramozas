#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

int main()
{
    int tomb[]= {1,5,6,9,0,7,6,4,2,3};
    int size = sizeof(tomb)/sizeof(tomb[0]);
    sort(tomb, size);
    for(int i=0; i<size; i++)
    {
        printf("%d ",tomb[i]);
    }
    return 0;
}
