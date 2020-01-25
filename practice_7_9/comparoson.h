#ifndef COMPAROSON_H_INCLUDED
#define COMPAROSON_H_INCLUDED
#include "person.h"
#define COMPARE(x,y) x==y?0:x<y?-1:1


void compare(Person people[], int size);

#endif // COMPAROSON_H_INCLUDED
