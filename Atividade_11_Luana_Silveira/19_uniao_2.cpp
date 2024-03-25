#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<ctime>

using namespace std;

main()
{
    setlocale(LC_ALL,"Portuguese");
    int *px = new int[5];
    int *py = new int[5];
    int *i = new int(0);
    int *aux = new int(0);

    srand(time(NULL));
    while(*i < 5)
    {
        *px = rand() % 21;
        *py = rand() % 21;
        py++;
        px++;
        (*i)++;
    }
    px-= *i;
    py-= *i;

    cout<<"X: ";
    for(int *j = new int(0); *j<5; (*j)++)
    {
        cout<<*px<<", ";
        px++;
    }
    px-= *i;
    cout<<endl;
    cout<<"Y: ";
    for(int *j = new int(0); *j<5; (*j)++)
    {
        cout<<*py<<", ";
        py++;
    }
    py-= *i;

    for(int *j = new int(0); *j <4; (*j)++)
    {
        for(int *k = new int(*j+1); *k <5; (*k)++)
        {
            if(px[*j]> px[*k])
            {
                *aux= px[*j];
                px[*j] =px[*k];
                px[*k]= *aux;
            }
            if(py[*j]> py[*k])
            {
                *aux= py[*j];
                py[*j] =py[*k];
                py[*k]= *aux;
            }
        }
    }
    cout<<endl;
    cout<<endl;
    cout<<"X ordenado: ";
    for(int *j = new int(0); *j<5; (*j)++)
    {
        cout<<*px<<", ";
        px++;
    }
    px-= *i;
    cout<<endl;
    cout<<"Y ordenado: ";
    for(int *j = new int(0); *j<5; (*j)++)
    {
        cout<<*py<<", ";
        py++;
    }
    py-= *i;

    int *pz = new int[10];

    for(int *a = new int(0); *a <10; (*a)++)
    {
        if(*a<5)
        {
            pz[*a]= *px;
            px++;
        }
        else
        {
            pz[*a]= *py;
            py++;

        }
    }
    for(int *j = new int(0); *j <9; (*j)++)
    {
        for(int *k = new int(*j+1); *k <10; (*k)++)
        {
            if(pz[*j]> pz[*k])
            {
                *aux= pz[*j];
                pz[*j] =pz[*k];
                pz[*k]= *aux;
            }
        }
    }
    cout<<endl;
    cout<<endl;
    cout<<"Resultado: ";
    for(int *j = new int(0); *j<10; (*j)++)
    {
        cout<<*pz<<", ";
        pz++;
    }
    pz-= *i;
 cout<<endl;
}
