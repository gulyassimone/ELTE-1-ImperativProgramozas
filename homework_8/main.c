#include <stdio.h>
#include <stdlib.h>
#include <swap.h>

int order()
{
    for(int i=0; i<sizeof(tomb)/tomb[0]; i++)
    {
        for(int j=0; j<sizeof(tomb)/tomb[0]; j++)
        {
            if(tomb>tomb+1)
            {
                swap(&tomb, &(tomb+1));
            }
            tomb[i];
        }
    }
}
