#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<ctime>
#include<cstring>

using namespace std;

void leitura(int *valores)
{
     srand(time(NULL));
    int x, i, cont=0, aux;
    bool flag;

     for(i= 0; i < 6; i++)
    {
        aux = rand() % 50+1;
        cont++;
        if(i == 0)
            valores[i] = aux;
        else
        {
            flag = false;
            for(x = 0; x < i; x++)
            {
                if(aux == valores[x])
                {
                    flag = true;
                    break;
                }
            }
            if(flag)
                i--;
            else
                valores[i] = aux;
        }

    }
}

void mostra(int *valores)
{
     srand(time(NULL));
    int x;
    for(x = 0; x < 6; x++)
    {
        cout << valores[x] << ", ";
    }

}

void total(int *valores)
{
   int x, soma=0, qtd=0;
   cout<<"Os n�meros pares s�o: "<<endl;
    for(x = 0; x < 6; x++)
    {
        if(valores[x]%2==0)
        {
            cout<<"N�mero "<< valores[x]<<" na posi��o "<<x<<endl;
            soma+=valores[x];
        }
    }
    cout<<"Soma dos pares = "<<soma;
    cout<<endl;
    cout<<endl;
    cout<<"Os n�meros impares s�o: "<<endl;
    for(x = 0; x < 6; x++)
    {
        if(valores[x]%2!=0)
        {
            cout<<"N�mero "<< valores[x]<<" na posi��o "<<x<<endl;
            qtd++;
        }
    }
    cout<<"Quantidade de impares = "<<qtd;
}
main()
    {
        setlocale(LC_ALL,"Portuguese");
        int vet[6];
        leitura(vet);
        cout<<"Vetor gerado: ";
        mostra(vet);
        cout<<endl;
        cout<<endl;
        cout<<"Relat�rio: "<<endl;
        cout<<endl;
        total(vet);
        getchar();
    }
