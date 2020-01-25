#include <stdio.h>
#include <stdlib.h>
#define GET_ARRAZ_SIZE(tomb) sizeof(tomb)/sizeof(tomb[0])

int main()
{
    int tomb[20];
    printf("%d\n", GET_ARRAZ_SIZE(tomb));
    return 0;
}
