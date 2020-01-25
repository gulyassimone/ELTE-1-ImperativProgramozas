#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void convert(char number[], int from, int to)
{
    int dec=0,i=0;
    char output[64];

    for (int i=0; number[i]!='\0'; i++)
    {
        dec*=from;
        if(number[i]<='9')
        {
            dec+=number[i]-'0';
        }
        else
        {
            dec+=number[i]-'a'+10;
        }
    }
    i=1;
    while(dec!=0)
    {
        if(dec%to<10)
        {
            output[i]=dec%to+'0';
        }
        else
        {
            output[i]=dec%to+'0';

        }
        i++;
        dec/=to;
    }

    for(int j=i-1; j>0;j--)
    {
        printf("%c", output[j]);
    }
}
