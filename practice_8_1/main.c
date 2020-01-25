#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{

    char *tomb=(char*)malloc(strlen(argv[1])*sizeof(char));
    tomb=argv[1];
    printf("%s %d \n", strrev(tomb));
    return 0;
}
