#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

void pointerString();
void float_szam();

int main()
{
    /* char password[]="asdf";
     char input[64];

     printf("Password: ");
     scanf("%63s",input);
     bool password_matches = !strcmp(password,input);
     printf(password_matches?"correct\n":"not Correct\n");
    */
    pointerString();
    return 0;
}
void pointerString()
{
    char *p="blabla";
    char s[]="valamivalami";

    printf("%s \n", p);
    printf("%s \n", s);

    printf("%u \n",sizeof(p));
    printf("%u \n",sizeof(s));

    for(int i=0; i<strlen(p); ++i)
    {
        printf("%c", p[i]);
    }

    for(int i=0; i<sizeof(s)-1; ++i)
    {
        printf("%c", s[i]);
    }

}
void float_szam()
{
    float szam = 10.5;
    printf("%f", szam);
}
