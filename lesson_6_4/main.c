#include <stdio.h>
#include <stdlib.h>

int *minmax(int *tomb, int size);
int main()
{
    int tomb[]={1,2,3,4,5,6,7,10};
    minmax(tomb, sizeof(tomb)/sizeof(tomb[0]));
    for(int i=0; i<sizeof(tomb)/sizeof(tomb[i]);i++)
    {
        printf("%d ", tomb[i]);
    }
    return 0;
}
int *minmax(int *tomb, int size)
{
    int maxErt=tomb[0], minErt=tomb[0], max=0;
    for(int i=0; i<size;i++)
    {
        if(maxErt<tomb[i])
        {
            max=i;
            maxErt=tomb[i];
        }
        if(minErt>tomb[i])
        {
            minErt=tomb[i];
        }
    }
    tomb[max]=minErt;
    return tomb;
}
