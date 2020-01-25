#include <stdio.h>
#include <stdlib.h>

int* sort(int *tomb, int size)
{
    for(int i=0; i<size; i++)
    {
        for(int j=i; j<size; j++)
        {
            if(tomb[i]>tomb[j])
            {
                int temp=tomb[i];
                tomb[i]=tomb[j];
                tomb[j]=temp;
            }
        }
    }
    return tomb;
}
