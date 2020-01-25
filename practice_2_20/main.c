#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tomb[]= {1,1,0,0,1,1};
    int szam;
    scanf("%d", &szam);
    for(int i=0; i<sizeof(tomb)/sizeof(tomb[0]); i++)
    {
        tomb[i]^=szam;
        printf("%d",tomb[i]);
    }
    printf("\n");
    scanf("%d", &szam);
    for(int i=0; i<sizeof(tomb)/sizeof(tomb[0]); i++)
    {
        tomb[i]^=szam;
        printf("%d",tomb[i]);
    }
    return 0;
}
