#include <stdio.h>
#include <stdlib.h>
#include "define.h"

int define(int* num)
{
    for(int i=0; i<SIZE; i++)
    {
        printf("%d %d %d\n", SIZE, sizeof(num), num[i]);
    }
    return 0;
}
