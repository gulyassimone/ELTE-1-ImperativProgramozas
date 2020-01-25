#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tomb[]={1,2,3,4,0,11,12,13};
    int min=tomb[0];
    int max=tomb[0];
    for(int i=0; i<sizeof(tomb)/sizeof(tomb[0]); i++)
    {
        if(min>tomb[i])
        {
            min=tomb[i];
        }
        if(max<tomb[i])
        {
            max=tomb[i];
        }
    }
    printf("min %d, max %d", min, max);
    return 0;
}
