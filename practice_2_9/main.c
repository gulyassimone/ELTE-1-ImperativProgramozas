#include <stdio.h>
#include <stdlib.h>

typedef enum
{
    ko=1, papir, ollo
} valasz;

int main()
{
    valasz a;
    valasz b;
    scanf("%u %u",&a, &b);
    printf("%u %u ",a,b);

    switch(a)
    {
    case ko :
        switch(b)
        {
        case ko:
            printf("Senki nem nyert");
            break;
        case papir:
            printf("b nyert ");
            break;
        default :
            printf("a nyert");
            break;
        }
        break;
    case papir :
        switch(b)
        {
        case papir:
            printf("Senki nem nyert");
            break;
        case ollo:
            printf("b nyert");
            break;
        default :
            printf("a nyert");
            break;
        }
        break;
    case ollo :
        switch(b)
        {
        case ollo:
            printf("Senki nem nyert");
            break;
        case ko:
            printf("b nyert");
            break;
        default:
            printf("a nyert");
            break;
        }
        break;
    }

    return 0;
}
