#include <stdio.h>
#include <stdlib.h>

int oszto(int a, int b);
int main()
{
    if(oszto(4,3))
    {
        printf("Osztoja\n");
    }
    else
    {
        printf("nem osztoja\n");
    }
    return 0;
}
int oszto(int a, int b)
{
    return a%b==0?1:0;
}
