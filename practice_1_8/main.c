#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char *argv[])
{

    for(int i=1; i<argc; i++)
    {
        printf("%s", argv[i]);
    }
}
