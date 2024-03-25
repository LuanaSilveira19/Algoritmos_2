#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<ctime>

using namespace std;

main()
{
    setlocale(LC_ALL,"Portuguese");

    int *pvet = new int[10];
    int *pdiv = new int[5];
    int *a = new int(0);
    int *i = new int(0);
    srand(time(NULL));
    while(*i < 10)
    {
        *pvet = rand() % 30 + 1;
        pvet++;
        (*i)++;
    }
    pvet -= *i;
    srand(time(NULL));
    while(*a <5)
    {
        *pdiv = 2 + rand() % 14;
        pdiv++;
        (*a)++;
    }
    pdiv -= *a;

    cout<<"Num: ";
    for(int *x = new int(0); *x <10; (*x)++)
    {
        cout << *pvet << ", ";
        pvet++;
    }
    pvet -= *i;
    cout<<endl;
    cout<<"Div: ";
    for(int *x = new int(0); *x <5; (*x)++)
    {
        cout << *pdiv << ", ";
        pdiv++;
    }
    pdiv-= *a;
    cout<<endl;
   cout<<endl;
  bool *entrou = new bool;
    for(int *j = new int(0); *j <10; (*j)++)
    {
         *entrou = false;
        cout<<"Número: "<<pvet[*j]<<endl;
        for(int *k = new int(0); *k <5; (*k)++)
        {
            if( pvet[*j] % pdiv [*k]==0)
            {
                *entrou=true;
                cout<<"Divisível por "<<pdiv [*k] <<" na posição "<<*k<<endl;

            }

        }
        if(*entrou==false)
            {
                cout<<"Não possui divisores no segundo vetor! "<<endl;
            }
        cout<<"---------------------------------------"<<endl;
    }

}
