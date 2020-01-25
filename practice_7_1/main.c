#include <stdio.h>
#include <stdlib.h>


typedef struct
{
    int nom;
    int denom;
} real;
int main()
{
    real real;

    scanf("%d %d",&real.nom, &real.denom );
    printf("%d", real.nom+real.denom);
    return 0;
}
