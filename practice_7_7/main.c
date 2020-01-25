#include <stdio.h>
#include <stdlib.h>
#include "person.h"


int main()
{
    int size =3;
    Person people[size];
    people[0].name="Adam";
    people[1].name="Karoly";
    people[2].name="Ada";
    people[0].age=40;
    people[1].age=30;
    people[2].age=12;
    sort(people, size);
    return 0;
}
