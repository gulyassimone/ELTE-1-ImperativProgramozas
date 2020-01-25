#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char *argv[])
{
    int sor=atoi(argv[1]);
    for(int i =0; i<sor; i++)
    {
        for(int j =0; j<2*sor; j++)
        {
            if(j >= sor-i && j <= sor+i)
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
