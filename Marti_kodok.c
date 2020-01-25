#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int summa(int, int);
int divi(int, int);
int print(void);
float celsToFahr(float);
int min(int[], int);
int max(int[], int);
void printH(char[]);
void isDiv(int, int);
void isPrime(int);
long fact(int);

int main()
{
    int a;
    scanf("%d", &a);
    return fact(a);
}

long fact(int a)
{
    if (a == 0)
        return 1;
    else
        return (a * fact(a-1));
}

void isPrime(int a)
{
    int prim = 0;
    int i;
    for (i = 2; i < a/2; i++)
    {
        if (a%i == 0)
            prim++;
    }
    if (prim == 0)
        printf("%d  Primszam.", prim);
    else
        printf("%d  Nem primszam.", prim);
}


int oszto()
{
    int elso,masodik;
    printf("Kerem az elso szamot!\n");
    scanf("%d", &elso);
    printf("Kerem a masodik szamot!\n");
    scanf("%d", &masodik);
    isDiv(elso, masodik);
    return 0;
}

void isDiv(int a, int b)
{
    if (a%b ==0)
        printf("Oszto");
    else
        printf("Nem oszto");
}

int minMax()
{
    int a[10] = {-4,-3,-2,-1,0,1,2,3,4,5};
    int size = sizeof(a)/sizeof(a[0]);
    printf("%d\t%d", min(a, size), max(a, size));

    return 0;
}

int max(int a[], int size)
{
    int i;
    int max = a[0];
    for (i = 0; i < size; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }
    return max;
}

int min(int a[], int size)
{
    int i;
    int min = a[0];
    for (i = 0; i < size; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
        }
    }
    return min;
}

int summa(int a, int b)
{
    return a + b;
}

int divi(int a, int b)
{
    double res = a/b;
    return res;
}

void printH(char string[])
{
    printf("%s", string);
}


int argprint(int argc, char **argv)
{
    int i;
    for (i=0; i<argc; ++i)
    {
        printf("%s", argv[i]);
    }
    return 0;
}

int argcount(int argc, char **argv)
{
    printf("%d",argc-1);
    return 0;
}

//format specifierben megadjuk, hogy mennyit olvasson be
int scanfrestrict()
{
    char name[8];
    scanf("%8s", name);
    printf("%s", name);
    return 0;
}

//basic types of C and size
int basicTypes()
{
    int a;
    double b;
    float c;
    char d[10];

    printf("%d\n", sizeof(a));
    printf("%d\n", sizeof(b));
    printf("%d\n", sizeof(c));
    printf("%d\n", sizeof(d));

    return 0;
}

int rectangle()
{
    int a;
    int b;
    printf("Kerem a negyszog egyik oldalat!\n");
    scanf("%d", &a);
    printf("Kerem a negyszog masik oldalat!\n");
    scanf("%d", &b);

    printf("Kerulet:\t%d\n", 2*(a+b));
    printf("Terulet:\t%d\n", (a*b));

    return 0;
}

int circle()
{
    int a;
    float pi = 3.1415;
    printf("Kerem a kor sugarat\n");
    scanf("%d", &a);

    float kerulet = 2*a*pi;
    float terulet = a*a*pi;

    printf("Kerulet:\t%f\n", kerulet);
    printf("Terulet:\t%f\n", terulet);

    return 0;
}

int evekNapokHetek()
{
    int napokSzama;
    printf("Kerem a napok szamat!\n");
    scanf("%d", &napokSzama);

    int ev = napokSzama/365;
    int het = (napokSzama%365)/7;
    int nap = napokSzama%7;

    printf("%d nap = %d ev %d het %d nap", napokSzama,ev,het,nap);

    return 0;
}

float celsToFahr(float c)
{
    float fahr = 9./5. * (c + 32);
    return fahr;
}

int printCelsToFahr()
{
    int celsius;
    printf("Kerem a homersekletet Celsiusban!\n");
    scanf("%d", &celsius);
    printf("Fahrenheit\t%f",celsToFahr(celsius));
    return 0;
}

int compare()
{
    char a[10];
    while (strcmp(a,"quit") !=0)
    {
        printf("Kerem adjon meg egy szot!\n");
        scanf("%10s", a);
    }
    printf("Koszonom!");
    return 0;
}

int halfPyramid()
{
    char a;
    scanf("%s", &a);
    int rows = atoi(&a);
    int i,j;

    for (i = 1; i <= rows; i++)
    {
        for (j = 1; j <= i ; j++)
        {
            printf("#");
        }
        printf("\n");
    }
    return 0;
}

int pyramid()
{
    char a;
    scanf("%s", &a);
    int rows = atoi(&a);
    int i, j, k;
    for (i = 1; i <= rows; i++)
    {
        for (j = 1; j <= rows-i; j++)
        {
            printf(" ");
        }
        for (k = 1; k <= 2*i-1; k++)
        {
            printf("#");
        }
        for (j = rows-i; j < 0;  j--)
        {
            printf(" ");
        }
        printf("\n");
    }

    return 0;
}


int pine()
{
    char a;
    scanf("%s", &a);
    int rows = atoi(&a);
    int i, j, k;
    for (i = 1; i <= rows; i++)
    {
        for (j = 1; j <= rows-i; j++)
        {
            printf(" ");
        }
        for (k = 1; k <= 2*i-1; k++)
        {
            printf("#");
        }
        for (j = rows-i; j < 0;  j--)
        {
            printf(" ");
        }
        printf("\n");
    }
    for (i = 1; i <= 2; i++)
    {
        for (j = 1; j <= rows-1; j++)
        {
            printf(" ");
        }
        printf("#");
        for (j = rows-i; j < 0;  j--)
        {
            printf(" ");
        }
        printf("\n");
    }

    return 0;
}

int ascii()
{
    char c;
    printf("Kerek egy karaktert:\n");
    scanf("%c", &c);
    printf("%c = %d", c, c);

    return 0;
}

int leapYear()
{
    int ev;
    printf("Kerek egy evet:\n");
    scanf("%d", &ev);
    if((ev%4 == 0 && ev%100 != 0) || (ev%400 == 0))
        printf("Szokoev");
    else
        printf("Nem szokoev");
    return 0;
}

int upperLowerCase()
{
    char a[10];
    scanf("%10s", a);
    int i;
    for (i = 0; i < sizeof(a); i++)
    {
        if (a[i] <= 57 && a[i] >= 48)
        {
            a[i] = 33;
        }
        else if (a[i] <= 90 && a[i] >= 65)
        {
            a[i] = a[i] + 32;
        }
        else if (a[i] <= 122 && a[i] >= 97)
        {
            a[i] = a[i] - 32;
        }
    }

    for (i = 0; i < sizeof(a); i++)
        printf("%c",a[i]);

    return 0;

}

int palindromSzam()
{
    int a;
    printf("Kerek egy szamot!\n");
    scanf("%d", &a);

    int n = a;
    int maradek;
    int b = 0;
    while (n != 0)
    {
        maradek = n % 10;
        b = b * 10 + maradek;
        n /= 10;
    }

    if (a==b)
        printf("%d = %d Palindrom.\n", a, b);
    else
        printf("%d <> %d Nem palindrom.\n", a, b);

    return 0;

}

int nemNegativCount()
{
    int a[10] = {-4,-3,-2,-1,0,1,2,3,4,5};
    int i;
    int count = 0;
    int size = sizeof(a)/sizeof(a[0]);
    printf("%d\n", size);
    for (i = 0; i < size; i++)
    {
        if (a[i] >= 0)
        {
            count = count + 1;
        }
    }
    printf("%d",count);
    return 0;
}
