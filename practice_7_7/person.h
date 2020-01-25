#ifndef PERSON_H_INCLUDED
#define PERSON_H_INCLUDED

typedef struct{
    char *name;
    int age;
} Person;

void sort(Person people[], int size);

#endif // PERSON_H_INCLUDED

