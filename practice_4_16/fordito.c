#include <stdio.h>
#include <stdlib.h>


char fordito(char c)
{
    switch(c)
    {
    case 'a' :
        c='4';
        break;
    case 'A' :
        c='4';
        break;
    case 'e' :
        c='3';
        break;
    case 'E' :
        c='3';
        break;
    case 'o' :
        c='0';
        break;
    case 'O' :
        c='0';
        break;
    case 'i' :
        c='1';
        break;
    case 'I' :
        c='1';
        break;
    case 's' :
        c='$';
        break;
    case 'S' :
        c='$';
        break;
    case 'c' :
        c='(';
        break;
    case 'C' :
        c='(';
        break;
    }
    return c;
}
