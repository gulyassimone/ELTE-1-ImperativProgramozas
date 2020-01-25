#include <stdio.h>
#include <stdlib.h>

int main()
{
    char s[]="valamiVALAMI12";
    int i=0;
    while(s[i]!='\0')
    {
        if(s[i]>='A' && s[i]<='Z')
        {
            s[i]=s[i]+32;
        }
        else if(s[i]>='a' && s[i]<='z')
        {
            s[i]=s[i]-32;
        }
        else if (s[i]>='0' && s[i]<='9')
        {
            s[i]='!';
        }
        ++i;
    }
    printf("%s",s);

    return 0;
}
