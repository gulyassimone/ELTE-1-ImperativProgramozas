#include <stdio.h>
#include <stdlib.h>
#define N 5

void kiir(int tomb[N][N]);
int** matrix_add(int tomb[N][N]);
int** matrix_skalar(int tomb[N][N]);
int** matrix_matrix(int tomb[N][N]);

int main()
{
    int tomb[N][N];
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<N; j++)
        {
            tomb[i][j]=i*2+j-3;
        }
    }
    kiir(tomb);
    printf("\n");
    matrix_add(tomb);
    printf("\n");
    matrix_skalar(tomb);
    printf("\n");
    matrix_matrix(tomb);
    return 0;
}
void kiir(int tomb[N][N])
{
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<N; j++)
        {
            printf("%d ",tomb[i][j]);
        }
        printf("\n");
    }
}
int** matrix_add(int tomb[N][N])
{
    int osszead[N][N];
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<N; j++)
        {
            osszead[i][j]=tomb[i][j]+tomb[i][j];
        }
    }
    kiir(osszead);
    return osszead;
}
int** matrix_skalar(int tomb[N][N])
{
    int szorzat[N][N];
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<N; j++)
        {
            szorzat[i][j]=tomb[i][j]*6;
        }
    }
    kiir(szorzat);
    return szorzat;
}
int** matrix_matrix(int tomb[N][N])
{
    int osszeg[N][N];
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<N; j++)
        {
            osszeg[i][j]=0;
            for(int k=0; k<N; k++)
            {
                osszeg[i][j]+=tomb[i][k]*tomb[k][j];
            }
        }
    }
    kiir(osszeg);
    return osszeg;
}
