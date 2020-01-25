#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char tomb[]="valAmAi";

    for(int i=0; tomb[i]!='\0'; i++)
    {
        tomb[i]=toupper(tomb[i]);
    }
    printf("%s\n", tomb);
    for(int i=0; tomb[i]!='\0'; i++)
    {
        tomb[i]=tolower(tomb[i]);
    }
    printf("%s\n", tomb);
    return 0;
}

/* char s[]="valamiVALAMI12";
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
 printf("%s",s);*/
