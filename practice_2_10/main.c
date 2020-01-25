#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ev;
    scanf("%d", &ev);
    if(ev%4!=0 || (ev%100==0 && ev%400!=0))
    {
        printf("nem szokoev");
    }
    else
    {
        printf("szokoev");
    }
    return 0;
}
