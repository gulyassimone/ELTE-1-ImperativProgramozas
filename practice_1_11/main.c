#include <stdio.h>
#include <stdlib.h>

int main()
{
    double tomb[]={1.2,3.4,5.6};
    printf("%d\n",sizeof(tomb)/sizeof(tomb[0]));
    return 0;
}
