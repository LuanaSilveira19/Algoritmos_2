#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<ctime>
using namespace std;

void gerar(int **X, int **Y)
{
    int *i = new int(0);
    int *aux = new int(0);
    bool *igual = new bool(false);
    int *paux = new int[5];
    srand(time(NULL));
    while(*i < 5)
    {
        *aux= rand() % 21;
        if(*i == 0)
        {
            *(*X) = *aux;
        }
        else
        {
            *igual=false;
            paux = (*X);
            for(int *x = new int(0); *x < *i; (*x)++)
            {
                paux--;
                if(*aux == *paux)
                {
                    *igual=true;
                    break;
                }
            }
            if(*igual)
            {
                (*i)--;
                (*X)--;
            }
            else
                *(*X) = *aux;
        }
        (*X)++;
        (*i)++;
    }
    (*X)-=*i;
    *i=0;
    *aux=0;
    int *pY = new int[5];
    while(*i < 5)
    {
        *aux= rand() % 21;
        if(*i == 0)
        {
            *(*Y) = *aux;
        }
        else
        {
            *igual=false;
            pY = (*Y);
            for(int *x = new int(0); *x < *i; (*x)++)
            {
                pY--;
                if(*aux == *pY)
                {
                    *igual=true;
                    break;
                }
            }
            if(*igual)
            {
                (*i)--;
                (*Y)--;
            }
            else
                *(*Y) = *aux;
        }
        (*Y)++;
        (*i)++;
    }
    (*Y)-=*i;
}

void ordenaxy(int **X, int **Y)
{
    int *aux = new int(0);
    for(int *j = new int(0); *j <4; (*j)++)
    {
        for(int *k = new int(*j+1); *k <5; (*k)++)
        {
            if((*X)[*j]> (*X)[*k])
            {
                *aux= (*X)[*j];
                (*X)[*j] =(*X)[*k];
                (*X)[*k]= *aux;
            }
            if((*Y)[*j]> (*Y)[*k])
            {
                *aux= (*Y)[*j];
                (*Y)[*j] =(*Y)[*k];
                (*Y)[*k]= *aux;
            }
        }
    }

    cout<<"X ordenado: ";
    for(int *j = new int(0); *j<5; (*j)++)
    {
        cout<<*(*X)<<", ";
        (*X)++;
    }
    cout<<endl;
    cout<<"Y ordenado: ";
    for(int *j = new int(0); *j<5; (*j)++)
    {
        cout<<*(*Y)<<", ";
        (*Y)++;
    }
}

void resultado(int **X, int **Y)
{
    int *pz = new int[10];
    int *aux = new int(0);
    for(int *a = new int(0); *a <10; (*a)++)
    {
        if(*a<5)
        {
            pz[*a]= *(*X);
            (*X)++;
        }
        else
        {
            pz[*a]= *(*Y);
            (*Y)++;

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
    int *j = new int(0);
    for(int *j = new int(0); *j<10; (*j)++)
    {
        cout<<pz[*j]<<", ";
    }

     cout<<endl; cout<<endl;
     cout<<"Resultado sem repetidos: ";
int *i = new int(0);
     bool *flag;
     for(int *x = new int(0); *x< 10; (*x)++)
    {
        *flag=false;
        for(int *i = new int(0); *i< *x; (*i)++)
        {
            if(pz[*x]==pz[*i])
            {
                *flag=true;
                break;
            }
        }
        if(*flag==false)
        {
            cout <<pz[*x]<< ", ";
        }
    }
    cout<<endl;
}
main()
{

    setlocale(LC_ALL,"Portuguese");
    int *px = new int[5];
    int *py = new int[5];
    int *i = new int(0);
    gerar(&px, &py);
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
    cout<<endl;
    gerar(&px, &py);
    cout<<endl;
    ordenaxy(&px, &py);
    gerar(&px, &py);
    resultado(&px, &py);

}

