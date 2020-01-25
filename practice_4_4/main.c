#include <stdio.h>
#include <stdlib.h>
#include "euc.h"

int main()
{
    int a,b;
    a=30;
    b=50;
    printf("%d es %d lkno: %d\n", a, b, euc_lnko(a, b));
    return 0;
}
