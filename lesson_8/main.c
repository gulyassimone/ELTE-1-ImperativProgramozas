#include <stdio.h>
#include <stdlib.h>

int* sort(int const *tomb, int size);
int main()
{
    int tomb[]= {1,2,3,4,6,3,2,1,4};
    int size=sizeof(tomb)/sizeof(tomb[0]);
    int *p=sort(tomb, size);
    printf("%d ",p[size/2+1]);
    free(p);
    return 0;
}

int* sort(int const *tomb, int size)
{
    int *p=(int*)malloc(size*sizeof(tomb[0]));
    for(int i=0; i<size; i++)
    {
        p[i]=tomb[i];
    }
    for(int i=0; i<size; i++)
    {
        for(int j=0; j<size; j++)
        {
            if(p[i]<p[j])
            {
                int temp=p[i];
                p[i]=p[j];
                p[j]=temp;
            }
        }
    }
    return p;
}
