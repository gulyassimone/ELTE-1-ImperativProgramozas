#ifndef PERSON_H_INCLUDED
#define PERSON_H_INCLUDED

typedef enum
{
    male,female
}Gender;
typedef struct{
    char *name;
    int age;
    Gender gender;
} Person;

void sort(Person people[], int size);

#endif // PERSON_H_INCLUDED
