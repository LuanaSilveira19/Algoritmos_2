#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<cstring>

using namespace std;


main()
{
    setlocale(LC_ALL,"Portuguese");
    int *n = new int(0);
    do
    {
        cout<<"Digite um número:";
        cin>>*n;
        if( *n<3 || *n>20)
        {
            cout<<"Número inválido"<<endl;
        }
    }
    while(*n<3 || *n>20);

 cout<<"Figura:"<<endl;
    for(int *j = new int(*n); *j>0; (*j)--)
    {
        for(int *k = new int(*j); *k>0; (*k)--)
        {
            cout<<" ";
        }
            for(int *x = new int(*j); *x<*n; (*x)++)
            {
                  cout<<" "<<*n;
            }


        cout<<endl;
    }
    for(int *j = new int(1); *j<=*n; (*j)++)
    {
        for(int *k = new int(*j-1); *k>0; (*k)--)
        {
            cout<<" ";
        }
        for(int *x = new int(*j); *x<=*n; (*x)++)
        {
         cout<<" "<<*n;
        }
        cout<<endl;

    }


}
