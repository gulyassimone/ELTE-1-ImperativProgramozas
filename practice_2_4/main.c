#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m;
    scanf("%d", &m);
    printf(",,,\n");
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<=i; j++)
        {
            printf("#");
        }
        printf("\n");
    }
    printf(",,,\n");
    return 0;
}
