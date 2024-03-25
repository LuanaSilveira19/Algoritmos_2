#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<ctime>

using namespace std;
void gerar( int **x1, int **x2, int **x3)
{
    int *i = new int(0);
    int *aux = new int(0);
    int *maior = new int(0);
    int *cont = new int(0);
    int *menor = new int(300);
    srand(time(NULL));

    while(*i < 10)
    {
         //aux= min + rand()% (max- min +1);
        *(*x1)= 201+ rand() % 99;
        *(*x2)= 201 + rand() % 99;
        (*x1)++;
        (*x2)++;
        (*i)++;
    }

    (*x1) -= *i;
    (*x2) -= *i;

    cout<<"X1: ";
    for(int *x = new int(0); *x <10; (*x)++)
    {

        cout << *(*x1) << ", ";
        (*x1)++;
    }
    (*x1) -= *i;
    cout<<endl;
    cout<<"X2: ";
    for(int *x = new int(0); *x <10; (*x)++)
    {
        cout << *(*x2) << ", ";
        (*x2)++;
    }
    (*x2) -= *i;
    for(int *x = new int(0); *x <10; (*x)++)
    {
        (*x3)[*x *2]= *(*x1);
        (*x3)[*x *2 +1]= *(*x2);
        (*x1)++;
        (*x2)++;
    }

    cout<<endl;
    cout<<"X3: ";
    for(int *x = new int(0); *x <20; (*x)++)
    {
        cout << (*x3)[*x]<< ", ";
    }
    cout<<endl;cout<<endl;
  int *prim = new int(0);
    cout<<"Números primos:";
   for(int *i = new int(0); *i <20; (*i)++)
        {
                int *cont = new int(0);

        for(int *j = new int(1); *j <=(*x3)[*i]; (*j)++)
        {
            if((*x3)[*i] % *j==0)
            {
             (*cont)++;
            }
        }
        if(*cont==2)
        {
             cout << (*x3)[*i]<< ", ";
             (*prim)++;
        }

    }
    cout<<endl;
    cout<<"Quantidade de números primos:"<<*prim<<endl;

    for(int *i = new int(0); *i <19; (*i)++)
    {
        for(int *x = new int(*i+1); *x <20; (*x)++)
        {
            if((*x3)[*i]>(*x3)[*x])
            {
                *aux= (*x3)[*i];
                (*x3)[*i] =(*x3)[*x];
                (*x3)[*x]= *aux;
            }
        }
    }
    cout<<"X3 em ordem crescente:"<<endl;
    for(int *x = new int(0); *x <20; (*x)++)
    {
        cout << *(*x3) << ", ";
        if(*maior< *(*x3))
        {
            *maior=*(*x3);
        }
        if(*menor> *(*x3))
        {
            *menor=*(*x3);
        }

        (*x3)++;
    }

    cout<<endl;    cout<<endl;
    cout<<"Maior elemento do X3:"<<*maior<<endl;
    cout<<"Menor elemento do X3:"<<*menor<<endl;






}

main()
{
    setlocale(LC_ALL,"Portuguese");
    int *px1 = new int[10];
    int *px2 = new int[10];
    int *px3 = new int[20];

    gerar(&px1,&px2,&px3);
}
