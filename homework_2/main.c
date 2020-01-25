#include <stdio.h>
#include <stdlib.h>

int megfordit(int x)
{
    int y;
    while(x)
    {
        y=y*10+x%10;
        x/=10;
    }
    return y;
}

int main()
{
    int a;
    scanf("%d",&a);
    printf("megforditott %d", megfordit(a));
    return 0;
}
