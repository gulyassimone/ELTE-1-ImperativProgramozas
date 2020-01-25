#include <stdio.h>
#include <stdlib.h>
#include "complex.h"


int main()
{
    complex a;
    complex b;
    complex result;
    printf("Kerem az elso komplex szam erteikeit:\n");
    scanf("%d %d", &a.real, &a.inreal);
    printf("Kerem a masodik komplex szam erteikeit:\n");
    scanf("%d %d", &b.real, &b.inreal);
    result=add(a, b);
    printf("%d %di\n", result.real, result.inreal);
    return 0;
}
