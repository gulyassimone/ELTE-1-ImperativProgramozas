#include <stdio.h>
#include <stdlib.h>

void swap(int *ap, int *bp);
void reverse(int *a, int n);

int main()
{
    int a[]= {1,2,3,4,5,6,7,8};
    int n=sizeof(a)/sizeof(a[0]);
    reverse(a,n);
    for(int i=0; i<n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}

void swap(int *ap, int *bp)
{
    if(0!=ap && 0!=bp)
    {
        int temp=*ap;
        *ap=*bp;
        *bp=temp;
    }
}
void reverse(int *a, int n)
{
    for(int i=0; i<n/2; i++)
    {
        swap(a+i, a+n-i-1);
    }
}
