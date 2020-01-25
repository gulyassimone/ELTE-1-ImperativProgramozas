#include <stdio.h>
#include <stdlib.h>
#include "convert.h"


int main()
{
    char number[64];
    int from, to;
    scanf("%s %d %d", number, &from, &to);
    printf("A %s szam %d szamrendszerben: ", number, to);
    convert(number, from, to);
    return 0;
}
