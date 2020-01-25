#include <stdio.h>
#include <stdlib.h>
#include "merge.h"



int main(){
    int a[IN_SZ];
    int b[IN_SZ];
    int c[OUT_SZ];


    for(int i=0; i<IN_SZ; i++)
    {
        a[i]=i*2;
        b[i]=i*3;
    }

    merge_v(a,b,c);

    for(int i=0; i<IN_OUT; i++)
    {
        printf("%d ", c[i]);
    }
    printf("\n");
    return 0;
}
