#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<ctime>
#include<cmath>


using namespace std;

main()
{
    setlocale(LC_ALL,"Portuguese");

    float vet[20];
    int i;
    cout << fixed;
    cout.precision(2);

    srand(time(NULL));
    for(i = 0; i < 20; i++)
    {
        vet[i] = (rand()%100) * 1.15;
    }
    cout << "Elementos do vetor: "<<endl;
    for(i = 0; i < 5; i++)
    {
        cout <<  vet[i] << ", ";

    }
    cout<<endl;
    for(i = 5; i < 10; i++)
    {
        cout <<  vet[i] << ", ";
    }
    cout<<endl;
    for(i = 10; i < 15; i++)
    {
        cout <<  vet[i] << ", ";
    }
    cout<<endl;
    for(i = 15; i < 20; i++)
    {
        cout <<  vet[i] << ", ";
    }
    cout<<endl;
    cout<<endl;

    cout<<"Valores arredondados para cima:"<<endl;
    cout << fixed;
    cout.precision(2);

    for(i = 0; i < 5; i++)
    {
        cout << ceil(vet[i]) << ", ";
    }
    cout<<endl;
    for(i = 5; i < 10; i++)
    {
        cout << ceil(vet[i]) << ", ";
    }
    cout<<endl;
    for(i = 10; i < 15; i++)
    {
        cout << ceil(vet[i]) << ", ";
    }
    cout<<endl;
    for(i = 15; i < 20; i++)
    {
        cout << ceil(vet[i]) << ", ";
    }

      cout<<endl;
    cout<<endl;

    cout<<"Valores arredondados para baixo:"<<endl;
    cout << fixed;
    cout.precision(2);

    for(i = 0; i < 5; i++)
    {
        cout << floor(vet[i]) << ", ";
    }
    cout<<endl;
    for(i = 5; i < 10; i++)
    {
        cout << floor(vet[i]) << ", ";
    }
    cout<<endl;
    for(i = 10; i < 15; i++)
    {
        cout << floor(vet[i]) << ", ";
    }
    cout<<endl;
    for(i = 15; i < 20; i++)
    {
        cout << floor(vet[i]) << ", ";
    }

       cout<<endl;
    cout<<endl;

    cout<<"Valores arredondados pelo critério da primeira casa decimal:"<<endl;
    cout << fixed;
    cout.precision(2);

    for(i = 0; i < 5; i++)
    {
        cout << round(vet[i]) << ", ";
    }
    cout<<endl;
    for(i = 5; i < 10; i++)
    {
        cout << round(vet[i]) << ", ";
    }
    cout<<endl;
    for(i = 10; i < 15; i++)
    {
        cout << round(vet[i]) << ", ";
    }
    cout<<endl;
    for(i = 15; i < 20; i++)
    {
        cout << round(vet[i]) << ", ";
    }

}
