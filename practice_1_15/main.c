#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nap;
    scanf("%d", &nap);
    printf("%d ev %d het %d nap", nap/365, (nap%365)/7, (nap%365)%7);

    return 0;
}
