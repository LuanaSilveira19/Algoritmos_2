#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<cstring>
#include<ctime>
using namespace std;

void mostra(int mat[3][5]);
void leitura(int mat[3][5]);
void maior(int a[3][5]);
void menor(int a[3][5]);
void media(int a[3][5]);
void trans(int a[3][5]);

main()
{
    setlocale(LC_ALL,"portuguese");
    int M[3][5];
    leitura(M);
    cout<<"Matriz gerada:"<< endl;
    mostra(M);
    cout<< endl;

    cout<<"Matriz Transposta:"<< endl;
     trans(M);
   cout<< endl;

    cout<<"Maior elemento da matriz:";
    maior(M);
    cout<< endl;

    cout<<"Menor elemento da matriz:";
    menor(M);
    cout<< endl;

    cout<<"Média dos elementos da matriz:";
    media(M);
    cout<< endl;

}
void trans(int a[3][5])
{
    for(int l=0; l<5; l++)
    {
        for(int c=0; c<3; c++)
        {
            cout<<a[c][l]<<"\t";
        }

        cout << "\n";
    }

}



void leitura(int mat[3][5])
{
    int l, c;
    srand(time(NULL));
    for(l = 0; l < 3; l++)
    {
        for(c = 0; c < 5; c++)
        {
            mat[l][c] = rand() % 50;
        }
    }
}

void mostra(int mat[3][5])
{
    int l, c;

    for(l = 0; l < 3; l++)
    {
        for(c = 0; c < 5; c++)
        {
            if( mat[l][c] %2==0)
            {
                cout << mat[l][c] << "\t";
            }
            else
            {
                mat[l][c]=  mat[l][c]+1;
                cout << mat[l][c] << "\t";
            }

        }
        cout << "\n";
    }
}

void maior(int a[3][5])
{
    int maior= a[0][0];

    for(int l = 0; l < 3; l++)
    {
        for(int c = 0; c < 5; c++)
        {
            if(a[l][c] > maior)
            {
                maior=a[l][c];

            }
        }

    }
    cout<<maior;
}

void menor(int a[3][5])
{
    int menor= a[0][0];

    for(int l = 0; l < 3; l++)
    {
        for(int c = 0; c < 5; c++)
        {
            if(a[l][c] < menor)
            {
                menor=a[l][c];

            }
        }

    }
    cout<<menor;

}
void media(int a[3][5])
{
    cout << fixed;
    cout.precision(2);
    float soma=0;

    for(int l = 0; l < 3; l++)
    {
        for(int c = 0; c < 5; c++)
        {
            soma+=a[l][c];
        }

    }
    cout<<soma/15;

}
