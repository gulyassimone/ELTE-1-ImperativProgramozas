#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char** argv)
{
    for(int i=0; i<argc; ++i)
    {
        printf("%d. %s \n", i, argv[i]);
    }
    return 0;
}
