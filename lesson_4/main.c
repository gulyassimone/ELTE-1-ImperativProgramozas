#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char name[]="Gulyas Simone\n";
    printf("%s\n", name);

    char *p="blabla";
    char s[]="blabla";

    printf("p nagysaga %d s nagysaga %d \n", sizeof(p), sizeof(s));

    printf(strcmp(s,p)==0?"egyenlo\n":"nem egyenlo\n");


    printf("Kerem a jelszot:  \n");
    char *password="QWER1234";
    char input[120];
    scanf("%s",input);
    printf(strcmp(password,input)==0?"ez a jelszo":"nem ez a jelszo");

    return 0;
}
