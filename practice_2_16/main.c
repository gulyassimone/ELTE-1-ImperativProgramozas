#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tomb[]={1,2,3,4,-2,-3,-4};
    int db=0;
    for(int i=0; i<sizeof(tomb)/sizeof(tomb[0]); i++)
    {
        if(tomb[i]<0)
        {
            db++;
        }
    }
    printf("%d\n", db);
    return 0;
}
