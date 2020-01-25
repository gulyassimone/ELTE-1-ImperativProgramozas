#include <stdio.h>
#include <stdlib.h>
#include "person.h"

void sort(Person people[], int size)
{
    for(int i=0; i<size; i++)
    {
        for(int j=i; j<size; j++)
        {
            if(people[i].age>people[j].age)
            {
                Person temp;
                temp=people[i];
                people[i]=people[j];
                people[j]=temp;
            }
        }
    }
    for(int i=0; i<size; i++)
    {
        printf("%s %d\n", people[i].name, people[i].age);
    }
}
