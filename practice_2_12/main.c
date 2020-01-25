#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int add(int a, int b);
int sub(int a, int b);
float diva(int a, int b);
int mul(int a, int b);
int main()
{
    int a, b;
    char muvelet[4];
    scanf("%s %d %d", muvelet, &a, &b);
    if(strcmp(muvelet,"add")==0)
    {
        printf("%d", add(a, b));
    }
    else if(strcmp(muvelet,"sub")==0)
    {
        printf("%d", sub(a, b));
    }
    else if(strcmp(muvelet,"mul")==0)
    {
        printf("%d", mul(a, b));
    }
    else if(strcmp(muvelet,"div")==0)
    {
        printf("%.3f", diva(a, b));
    }
    return 0;
}
int add(int a, int b)
{
    return a+b;
}
int sub(int a, int b)
{
    return a-b;
}
float diva(int a, int b)
{
    return ((float)a/b);
}
int mul(int a, int b)
{
    return a*b;
}
