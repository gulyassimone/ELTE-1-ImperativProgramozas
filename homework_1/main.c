#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    float farenheit=0;
    for(i=-20;i<=120;i=i+10)
    {
        farenheit=(float)5/9*(i-32);
        printf("%d %.2f \n",i,farenheit);
    }

}
