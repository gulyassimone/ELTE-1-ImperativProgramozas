#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size;
    scanf("%d", &size);
    int* tomb=(int *) malloc(sizeof(int)*size);

    for(int i=0; i<size; i++)
    {
        tomb[i]=i;
        printf("%d ", tomb[i]);
    }
    free(tomb);
    return 0;
}
