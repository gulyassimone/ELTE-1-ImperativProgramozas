#include <stdio.h>
#include <stdlib.h>

void kiir(int *p)
{
    printf("ertek: %d memoriacime:%p\n", *p, p);
}
int main()
{
    int a=1943;
    printf("ertek: %d memoriacime:%p\n", a, &a);

    int *p=&a;
    kiir(p);
    return 0;
}
