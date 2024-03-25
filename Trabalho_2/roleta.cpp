#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<ctime>

using namespace std;

main()
{
    setlocale(LC_ALL,"Portuguese");
    int *pvet = new int[5];
    int *i = new int(0);

    srand(time(NULL));
    while(*i < 5)
    {
        *pvet = rand() % 10;
        pvet++;
        (*i)++;
    }
    pvet -= *i;
    cout<<"Vetor:";
    for( int *x = new int(0); *x<5; (*x)++)
    {
        cout<<pvet[*x]<<", ";
    }
    cout<<endl;
    int *n = new int(0);
    int *cont = new int(5);
    int *aux = new int(5);
    cout<<"Informe um valor para a roleta:";
    cin>>*n;
    if(*n>4)
    {
        *aux-=*n-5;//vai até o 15
        for( int *j = new int(0); *j<5 ; (*j)++)
        {

            if(*j!= fabs(*aux)-1)
            {
                cout<<pvet[*j]<<", ";
            }
           }
        }

    else
    {
        for( int *x = new int(0); *x<5; (*x)++)
        {
            if(*x!=*n-1)
            {
                cout<<pvet[*x]<<", ";
            }
        }
        cout<<endl;
    }

}
