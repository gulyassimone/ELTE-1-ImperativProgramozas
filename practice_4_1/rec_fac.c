#include <stdio.h>
#include <stdlib.h>

int rec_fact(int number)
{
    int fact=0;
    if(number>=1)
    {
        fact=number*rec_fact(number-1);
    }
    else
    {
        fact =1;
    }
    return fact;
}
