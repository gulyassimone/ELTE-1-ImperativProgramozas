#include <stdio.h>
#include <stdlib.h>
#include "person.h"

int main()
{
    Person person;
    printf("Kerem a nevet\n");
    scanf("%s",person.name);
    printf("Kerem a korat\n");
    scanf("%d",&person.age);

    printf("nev: %s kor: %d", person.name, person.age);
    return 0;
}
