#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("+----------------+\n");
    for(int i=1; i<=8; i++)
    {
        for(int j=0; j<18; j++)
        {
            if(j==0 || j==17)
            {
                printf("|");
            }
            else if((i%2!=0 && j%4==1)||(i%2==0 && j%4==3))
            {
                printf("[");
            }
            else if((i%2!=0 && j%4==2)||(i%2==0 && j%4==0))
            {
                printf("]");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    printf("+----------------+\n");
    return 0;
}
