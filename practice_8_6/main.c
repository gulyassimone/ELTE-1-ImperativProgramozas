#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    time_t second;
    time(&second);
    timeinfo=localtime(&second);
    printf("%ld\n", asctime(timeinfo));
    return 0;
}
