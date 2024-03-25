#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<ctime>
#include<cstring>

using namespace std;
void maior(int ***p2, int n);
void mostra(int **p, int n)
{
    cout<<"Vetor: ";
    for(int i = 0; i < n; i++)
        cout << ((*p)[i]) << ", ";
    cout<<endl;
    maior(&p,n);
}
void maior(int ***p2, int n)
{
    int cont=0;
    int maior= (*(*(*p2)));

    for(int i=0; i<n; i++)
    {
        if((*(*p2))[i] > maior)
        {
            maior= (*(*p2))[i];
        }
    }
    for(int i=0; i<n; i++)
    {
        if((*(*p2))[i]== maior)
            cont++;

    }
    cout<<"O maior elemento é o "<< maior <<" e ocorreu "<<cont<<" vezes."<<endl;
}

main()
{
    setlocale(LC_ALL,"Portuguese");
    int n;
    cout<<"Informe o tamanho do vetor: ";
    cin>>n;


    int vet[n], *pvet;
    pvet = vet;
    srand(time(NULL));
    for(int i=0; i<n; i++)
    {
        *(pvet + i)=rand()%16;
    }

    mostra(&pvet, n);
}
