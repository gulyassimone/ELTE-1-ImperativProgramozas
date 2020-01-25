#include <stdio.h>
#include <stdlib.h>
#define FIZZ_BUZZ_TEST(z)               \
printf(                                 \
(z%5==0 && z%3==0) ? "FIZZBUZZ " :      \
(z % 5) == 0 ? "FIZZ " :                \
(z % 3) == 0 ? "BUZZ " :                \
"%d ",z);

int main()
{
    for(int i=0; i<100; i++)
    {
       FIZZ_BUZZ_TEST(i);
    }
    return 0;
}
