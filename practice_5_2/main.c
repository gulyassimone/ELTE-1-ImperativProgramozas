#include <stdio.h>
#include <stdlib.h>

//#define DIREKTIVE 35
#ifndef DIREKTIVE
    #define DIREKTIVE 34
#endif // DIREKTIVE

int main()
{
    printf("%d\n" , DIREKTIVE);
    return 0;
}
