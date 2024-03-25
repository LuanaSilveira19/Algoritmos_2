#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<ctime>

using namespace std;
main()
{
    setlocale(LC_ALL,"Portuguese");

    srand(time(NULL));

    int *n = new int;
    int *valor = new int(0);
    int *DP = new int(0);
    int *DS = new int(0);
    int *somaDP = new int(0);
    int *somaDS = new int(0);
    int *i = new int(0);
    int *maior = new int(0);

    cout << "Informe a dimenção da matriz: ";
    cin >> *n;
    fflush(stdin);

    int *mat = new int[*n * *n];
    for( int *i = new int(0); *i < (*n); (*i)++)
    {
        for(int *j = new int(0); *j < *n; (*j)++)
        {
            mat[*i * *n+*j] = rand() %(*n * *n);
        }
    }

    cout<<"Matriz gerada: "<<endl;
    for(int *i = new int(0); *i < *n; (*i)++)
    {
        for(int *j = new int(0); *j < *n; (*j)++)
        {
            cout << mat[*i * *n + *j] << "\t";
        }
        cout << "\n";
    }

    int *k = new int(0);
    for(*k ; *k < *n; (*k)++)
    {
        for(int *j = new int(0); *j < *n; (*j)++)
        {
            if(*k==*j)
            {
                *somaDP+= mat[*k * * n + *j];
            }
            if((*k+*j)== *n-1)
            {
                *somaDS+=mat[*k * * n + *j];
                *DS= mat[*k * *n + *j];
                DS++;
            }
        }
    }
    DS-=*k;

    int *menor = new int(*n * *n);
    for(int *m = new int(0); *m < *n; (*m)++)
    {
        if(*maior<*DS)
        {
            *maior=*DS;
        }
        if(*menor>*DS)
        {
            *menor=*DS;
        }
        DS++;
    }

    *valor=(*somaDP-*somaDS);
    cout<<endl;
    cout<<"Soma da diagonal Principal: "<< *somaDP<<endl;
    cout<<"Maior elemento DS: "<< *maior<<endl;
    cout<<"Menor elemento DS: "<< *menor<<endl;
    cout<<"Diferença das somas dos elementos acima da DP e abaixo da DP: "<<fabs(*valor)<<endl;

}
