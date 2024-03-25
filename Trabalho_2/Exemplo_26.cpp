#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<ctime>

using namespace std;
void mostra(int **p);
void calcula(int ***p2);


main()
{
    int vet[5], *pvet;
    pvet = vet;
    srand(time(NULL));
    for(int i = 0; i < 5; i++)
    {
        *(pvet + i) = rand() % 10;
    }
    cout<<"Valor pvet:  " << pvet << endl;
    mostra(&pvet);
}

void mostra(int **p)
{
    cout <<"Valor p:  "<< p << endl;
    for(int i = 0; i < 5; i++)
       //cout << (*p)[i] << ", ";
        cout << (*(*p)+i) << ", ";
        cout<<endl;
    calcula(&p);
}

void calcula(int ***p2)
{
    cout << "Valor p2:  " << p2 << endl;
    cout << "Valor *p2:  " << *p2 << endl;
    cout << "Valor *(*p2)):  " << (*(*p2)) << endl;
      cout << "Primeiro conteudo(*(*(*p2)):  " << (*(*(*p2))) << endl;
    int soma = 0;
    for(int i = 0; i < 5; i++)
    {
          soma += (*(*(*p2)+ i));
          cout<<"valor: "<<(*(*(*p2)+ i))<<endl;
    }

       //soma += (*(*p2))[i];
    cout << "\n\nSoma: " << soma;
}
