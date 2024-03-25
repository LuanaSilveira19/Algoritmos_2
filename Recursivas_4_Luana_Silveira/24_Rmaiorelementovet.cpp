#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<ctime>

using namespace std;
void gerar(int vet[10]);
void mostra(int vet[10]);

int maior(int vet[], int tam, int indice);
main()
{
    int V[10];

    gerar(V);
    cout<<"Vetor V:";
    mostra(V);
    cout<<endl;
    cout<<endl;
    cout<<"Maior elemento de V= ";
    cout<<maior(V,10,0);
    cout<<endl;
}


void mostra(int vet[10])
{
    int i;
    for(i = 0; i < 10; i++)
    {
        cout << vet[i] << ", ";
    }
}
void gerar(int vet[10])
{
    int i, aux, cont=0, x;
    bool flag;
    srand(time(NULL));

    for(i = 0; i < 10; i++)
    {
        aux = rand() % 100;
        cont++;
        if(i == 0)
            vet[i] = aux;
        else
        {
            flag = false;
            for(x = 0; x < i; x++)
            {
                if(aux == vet[x])
                {
                    //cout << "\nValor duplicado " << aux << endl;
                    flag = true;
                    break;
                }
            }
            if(flag) //mesma coisa que if(flag == true)
                i--;
            else
                vet[i] = aux;
        }

    }
}
int maior(int vet[], int tam, int indice)
{
    if(tam == 0)
        return vet[indice];
    else
    {
        if(vet[tam-1] > vet[indice])
            return maior(vet, tam-1, tam-1);
        else
        {
            return maior(vet, tam-1, indice);
        }
    }
}
