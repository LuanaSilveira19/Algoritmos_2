#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<fstream>
#include<ctime>

using namespace std;
void gerar(int vet[])
{
    int i=0, aux,  cresc;
    bool igual;
    srand(time(NULL));
    while(i <20)
    {
        aux= rand()%101;
        if(i==0)
        {
            vet[i] = aux;
        }
        else
        {
            igual=false;
            for(int x =0; x<i; x++)
            {
                if(aux== vet[x])
                {
                    igual=true;
                    break;
                }
            }
            if( igual)
                i--;
            else
                vet[i]  = aux;
        }
        i++;
    }

}
void mostrar(int vet[])
{

    for(int i=0; i<20; i++)
    {
        cout<<vet[i]<<", ";
    }
}
void escreve(int vet[])
{
    int i=0;

    ofstream escreve;
    escreve.open("exer_39.txt");
    if(escreve.is_open())
    {
        escreve<<"Vetor: ";
        while(i<20)
        {
            escreve << vet[i];
            escreve << ", ";
            i++;
        }

    }
    else
    {
        cout << "Erro ao abrir o arquivo";
    }
    escreve.close();
}
void escreve2(int vet[])
{
    int i=0;

    ofstream escreve;
    escreve.open("exer_39.txt");
    if(escreve.is_open())
    {
        escreve<<"Vetor alterado: ";
        while(i<20)
        {
            escreve << vet[i];
            escreve << ", ";
            i++;
        }

    }
    else
    {
        cout << "Erro ao abrir o arquivo";
    }
    escreve.close();
}
main()
{
    setlocale(LC_ALL,"Portuguese");
    int vet[20], ind_1, ind_2;
    int aux1, aux2;
    gerar(vet);
    cout<<"Vetor:";
    mostrar(vet);
    escreve(vet);
    cout<<endl;
    do
    {
        cout<<"Informe a 1º posição a ser trocada: ";
        cin>>ind_1;
        cout<<"Informe a 2º posição a ser trocada: ";
        cin>>ind_2;
    }
    while(ind_1>20||ind_1<0 || ind_2>20||ind_2<0);

    for(int i=0; i<20; i++)
    {
        if(ind_1==i)
            aux1=vet[i];
        if(ind_2==i)
            aux2=vet[i];
    }
    for(int i=0; i<20; i++)
    {
        if(ind_1==i)
            vet[i]=aux2;
        if(ind_2==i)
            vet[i]=aux1;
    }

     escreve2(vet);
     cout<<"Vetor modificado:";
    mostrar(vet);


}
