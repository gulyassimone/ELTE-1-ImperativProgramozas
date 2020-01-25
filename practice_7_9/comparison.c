#include "comparoson.h"
#include <string.h>
#include <stdio.h>

void compare(Person people[], int size)
{
    for(int i=0; i<size; i++)
    {
        for(int j=i; j<size; j++)
        {
            if(strlen(people[i].name)>strlen(people[j].name))
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
        printf("%s %d %d\n", people[i].name, people[i].age, people[i].gender);
    }
}
