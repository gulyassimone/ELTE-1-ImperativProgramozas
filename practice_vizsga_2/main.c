#include <stdio.h>
#include <stdlib.h>
#define szam int

typedef struct
{
    szam capacity;
    szam length;
    szam *p;
} Vector;

int main()
{
    Vector vector;
    vector.capacity=10;
    vector.p=(int*)malloc(vector.capacity*sizeof(int));
    printf("Hello world!\n");
    return 0;
}
