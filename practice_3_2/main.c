#include <stdio.h>
#include <stdlib.h>

int max(int a, int b);
int main()
{
    printf("%d\n", max(2, 3));
    return 0;
}
int max(int a, int b)
{
    return a>b?a:b;
}
