#include <stdio.h>
#include <stdlib.h>
#define ADD(x,y) (x+y)
#define SUB(x,y) (x-y)
#define MUL(x,y) (x*y)
#define DIV(x,y) (x/y)
#define OP(x,y) op==1?ADD(x,y):(op==2?SUB(x,y):(op==3?MUL(x,y):(op==4?DIV(x,y):0)))

typedef enum
{ADD=1, SUB, MUL, DIV} Op;
int main()
{
    int x,y;
    Op op;
    scanf("%d %d %d",&x,&y,&op);
    printf("%d\n", OP(x,y));
    return 0;
}
