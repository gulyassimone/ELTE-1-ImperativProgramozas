#include <stdio.h>
#include <stdlib.h>
#define FALSE (1==0)
#define TRUE (1==1)
#define bool int

bool is_div(int a, int b);

int main()
{
    printf(is_div(4,8)?"oszthato":"nem oszthato");
    return 0;
}
bool is_div(int a, int b)
{
    return a%b==0?TRUE:FALSE;
}
