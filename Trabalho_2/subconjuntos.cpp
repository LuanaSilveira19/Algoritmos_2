#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<ctime>

using namespace std;
/*Subconjuntos de um Vetor
Escreva um programa que receba um vetor como entrada e retorne todos os subconjuntos possíveis do vetor.
Exemplo de entrada:
Vetor: [1, 2, 3]
Saída esperada:
Subconjuntos:
{}
{1}
{2}
{3}
{1, 2}
{1, 3}
{2, 3}
{1, 2, 3}*/
main()
{
    setlocale(LC_ALL,"Portuguese");
    int *pvet = new int[3];
    int *i = new int(0);
    int *aux = new int(0);
    bool *igual = new bool(false);
    // srand(time(NULL));
    while(*i < 3)
    {
        *aux= rand()% 10;
        if(*i==0)
        {
            pvet[*i] = *aux;
        }
        else
        {
            *igual=false;
            for(int *x = new int(0); *x< *i; (*x)++)
            {
                if(*aux== pvet[*x])
                {
                    *igual=true;
                    break;
                }
            }
            if( *igual)
                (*i)--;
            else
                pvet[*i]  = *aux;
        }
        (*i)++;
    }

    cout<<"Vetor:"<<"\t";
    for(int *x = new int(0); *x< 3; (*x)++)
    {
        cout << pvet[*x] << "| ";
    }
    cout<<endl;

    cout<<"Subconjuntos: "<<endl;
    for(int *x = new int(0); *x< 3; (*x)++)
    {
        if(*x==0)
        {
            cout<<"{ }"<<endl;
        }
        cout<<"{"<<pvet[*x] << "} "<<endl;
    }
    for(int *x = new int(0); *x< 3; (*x)++)
    {
        for(int *j = new int(1); *j< 3; (*j)++)
        {
            if(pvet[*x]!=pvet[*j])//falta organisar os que repetem
            {
                cout<<"{"<<pvet[*x] << ", "<< pvet[*j]<< "} "<<endl;
            }
        }
    }
            cout<<"{";
      for(int *x = new int(0); *x< 3; (*x)++)
    {

       cout<<pvet[*x] <<",";
    }
        cout<<"}";
    cout<<endl;


}
