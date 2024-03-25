#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<ctime>

using namespace std;

main()
{
      setlocale(LC_ALL,"Portuguese");
    int *pvet = new int[20];
    int *i = new int(0);
    int *primeiro = new int(0);
    int *ultimo = new int(0);
    srand(time(NULL));

    cout<<"Antes : ";
    while(*i < 20)
    {
        *pvet = rand() % 101;
         cout << *pvet << ", ";
         pvet++;
        (*i)++;
    }
    pvet -= *i;
    cout<<endl;
    *primeiro=*pvet;


    cout<<"Depois: ";
    for(int *x = new int(0); *x < 20; (*x)++)
    {
        pvet++;
        if(*x==19)
        {
             *pvet=*primeiro;
        }
         cout << *pvet<< ", ";
    }


}
