#include <stdio.h>
#include <stdlib.h>
#include "max.h"

int main()
{
    int tomb[]= {1,2,3,15,14,0};
    printf("%d \n",  max(tomb, sizeof(tomb)/sizeof(tomb[0])));
    return 0;
}
