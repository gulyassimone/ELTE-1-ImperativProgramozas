#include <stdio.h>
#include <stdlib.h>
#define IS_BETWEEN(x,y,z) ((x<y)&&(x>z))||((x>y)&&(x<z))

int main()
{
    printf(IS_BETWEEN(3,1,4)?"kozotte van":"nincs kozotte");
    return 0;
}
