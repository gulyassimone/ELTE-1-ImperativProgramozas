#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *tomb = (int*)malloc(3*sizeof(int));
    if(tomb==NULL)
    {
        printf("Nem sikerult a memoriateruletet lefoglalni");
    }
    else
    {
        tomb[2]=3;
        for(int i=0; i<3;i++)
        {
            printf("tomb %d-dik eleme %d\n",i, tomb[i]);
        }
        printf("%d\n", tomb[2]);
        int size;
        scanf("%d", &size);
        tomb=realloc(tomb, size*sizeof(int));
        tomb[size-1]=6;
        for(int i=0; i<size;i++)
        {
            printf("A modositott tomb %d-dik eleme %d\n",i, tomb[i]);
        }
        free(tomb);
    }
    return 0;
}
