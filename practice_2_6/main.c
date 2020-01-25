#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sor;
    scanf("%d", &sor);
    for(int i=0; i<sor; i++)
    {
        for(int j =0; j<2*sor; j++)
        {
            if(j >= sor-i && j <= sor+i && i<=sor-3)
            {
                printf("#");
            }
            else if(j==sor && i>sor-3)
            {
                printf("#");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
