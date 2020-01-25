#include <stdio.h>
#include <stdlib.h>
#include "complex.h"

complex add(complex a, complex b)
{
    complex result;
    result.real=a.real+b.real;
    result.inreal=a.inreal+b.inreal;
    return result;
}
