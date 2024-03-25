#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<ctime>

using namespace std;

main()
{
    setlocale(LC_ALL,"Portuguese");

    int *pA = new int[10];
    int *i = new int(0);
    int *tamx = new int(0);
    int *tamy = new int(0);
    srand(time(NULL));
    while(*i < 10)
    {
        *pA = rand() % 50 +1;
        if(*pA<26)
        {
            (*tamx)++;
        }
        else
        {
            (*tamy)++;
        }
        pA++;
        (*i)++;
    }

    pA-= *i;

    *i= 0;
    int *pX = new int [*tamx];
    int *pY = new int [*tamy];

    *tamx=0;
    *tamy=0;
    while(*i < 10)
    {
        if(*pA<26)
        {
            pX[*tamx]=*pA;
            (*tamx)++;
        }
        else
        {
            pY[*tamy]=*pA;
            (*tamy)++;
        }
        pA++;
        (*i)++;
    }

    pA-= *i;
    cout<<"A: ";
    for(int *x = new int(0); *x <10; (*x)++)
    {
        cout << *pA << ", ";
        pA++;

    }
    pA-= *i;
    cout<<endl;

    cout<<"X: ";
    if(*tamx==0)
    {
        cout<<"O vetor A não possui valores menores que 26!";
    }
    else{
    for(int *x = new int(0); *x <*tamx; (*x)++)
    {
        cout<<pX[*x]<<", ";

    }
    }
    cout<<endl;
    cout<<"Y: ";
    if(*tamy==0)
    {
        cout<<"O vetor A não possui valores maiores que 25!";
    }
    else
    {
        for(int *x = new int(0); *x <*tamy; (*x)++)
        {
            cout<<pY[*x]<<", ";
        }
    }

    delete[] pA;
    delete[] pX;
    delete[] pY;
    delete i;
    delete tamx;
    delete tamy;
}
