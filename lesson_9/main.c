#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i=0;
    int *tomb=(int*)malloc(i+1*sizeof(int));
    n=getc(stdin);
    while(n!=EOF)
    {
        if(n>'0' && n<'9')
        {
            i++;
            tomb=realloc(tomb,i*sizeof(int));
            tomb[i-1]=n-'0';
        }
        n=getc(stdin);
    }
    for(int j=0; j<i; j++)
    {
        printf("%d \n", tomb[j]);
    }
    free(tomb);
    return 0;
}
