#include <stdio.h>
#include "person.h"
#include "comparoson.h"

int main()
{
    int size =3;
    Person people[size];
    people[0].name="Adam";
    people[1].name="Karoly";
    people[2].name="Ada";
    people[0].age=40;
    people[1].age=12;
    people[2].age=12;
    people[0].gender=male;
    people[1].gender=male;
    people[2].gender=female;
    sort(people, size);
    printf("Melyik a  nagyobb: %d\n", COMPARE(people[1].age, people[0].age));
    compare(people, size);
    return 0;
}

