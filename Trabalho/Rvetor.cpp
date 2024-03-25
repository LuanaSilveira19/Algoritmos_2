#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<ctime>

using namespace std;

void vetor(int n[], int ini, int fim)
{
    n[ini]=rand()%50;
    if(ini==fim)
    {
        return;
    }
    else
    {
        cout<<n[ini]<<", ";
        vetor(n,ini+1, fim);
    }

}
int maior(int vet[], int indice, int tam)
{

    if(tam == 0)
        return vet[indice];
    else
    {
        if(vet[tam-1] > vet[indice])
            return maior(vet, tam-1, tam-1);
        else
        {
            return maior(vet, indice, tam-1);
        }
    }
}
int menor(int vet[], int indice, int tam)
{

    if(tam == 0)
        return vet[indice];
    else
    {
        if(vet[tam-1] < vet[indice])
            return menor(vet, tam-1, tam-1);
        else
        {
            return menor(vet, indice, tam-1);
        }
    }
}
main()
{
    setlocale(LC_ALL,"Portuguese");

    int V[10];
    srand(time(NULL));
    cout<<"Vetor: ";
    vetor(V, 0, 10);
    cout<<endl;
    cout<<"Maior: ";
    cout<<maior(V, 0, 10);
      cout<<endl;
    cout<<"Menor: ";
    cout<<menor(V, 0, 10);

}
