#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name[10];
    scanf("%10s", &name);
    printf("Hello %s %d", name, sizeof(name));
    return 0;
}
