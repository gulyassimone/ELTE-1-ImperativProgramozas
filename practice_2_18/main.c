#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

int main()
{
    int tomb[]= {1,0,1,0,0};

    for(int i=0; i<sizeof(tomb)/sizeof(tomb[0]); i++)
    {
        tomb[i]&=TRUE;
        printf("%d", tomb[i]);
    }
    printf("\n");
    for(int i=0; i<sizeof(tomb)/sizeof(tomb[0]); i++)
    {
        tomb[i]|=FALSE;
        printf("%d", tomb[i]);
    }
    return 0;
}
