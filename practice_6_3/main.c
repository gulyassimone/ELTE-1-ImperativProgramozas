#include <stdio.h>
#include <stdlib.h>

void swap(int *p, int *q)
{
    int temp=*q;
    printf("%d %p\n", temp, &temp);
    *q=*p;
    printf("%d %p\n", *p, p);
    *p=temp;
    printf("%d %p\n", *q, q);
}
int main()
{
    int a=10, b=20;
    printf("a %d %p\n", a, &a);
    printf("b %d %p\n", b, &b);
    int *p=&a, *q=&b;
    swap(p, q);
    printf("%d %d\n", a, b);
    return 0;
}
