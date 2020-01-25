#include <stdio.h>
#include <stdlib.h>
#include "rock.h"

void rock(valasz a, valasz b)
{
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

}
