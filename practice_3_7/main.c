#include <stdio.h>
#include <stdlib.h>
int fatorial(int a);
int main()
{
    printf("%d\n", fatorial(5));
    return 0;
}
int fatorial(int a)
{
    int fact=1;
    for(int i=a; i>1; i--)
    {
        fact*=i;
    }
    return fact;
}
