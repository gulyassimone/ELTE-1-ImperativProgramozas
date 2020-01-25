#include <stdio.h>
#include <stdlib.h>
#include "pal.h"

int main()
{
    int number;
    scanf("%d", &number);
    printf(palindrom(number)?"palindrom\n":"nem palindrom");
    return 0;
}
