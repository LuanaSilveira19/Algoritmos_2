#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<ctime>

using namespace std;

void leitura(int mat[][8]);
void mostra(int mat[][8]);
void DP(int mat[][8]);
void DS(int mat[][8]);

void vetor(int v[8], int mat[][8]);

main()
{
    setlocale(LC_ALL,"portuguese");
    int M[8][8], V[8];
    leitura(M);
    cout << "Matriz gerada: " << endl;
    mostra(M);
    cout<<endl;

    cout <<"Diagonal Principal da matriz: ";
    DP(M);

    cout<<endl;

    cout <<"\n\nDiagonal Secundária da matriz: ";
    DS(M);

     cout<<endl;

    cout <<"\n\nVetor com a soma dos elementos: ";
    vetor(V,M);
      cout<<endl;
}

void vetor(int v[8], int mat[][8])
{
    int i, x, soma=0;
    for(i = 0; i < 8; i++)
    {
        for(x = 0; x < 8; x++)
        {
            soma+=mat[i][x];
        }
        v[i]=soma;cout<<soma<<", ";
        soma=0;
    }
}
void DP(int mat[][8])
{
    int i, x;
    for(i = 0; i < 8; i++)
    {
        for(x = 0; x < 8; x++)
        {
            if(i== x)
            {
                cout << mat[i][x] <<", ";
            }
        }
    }
}

void DS(int mat[][8])
{
    int i, x;
    for(i = 0; i < 8; i++)
    {
        for(x = 0; x < 8; x++)
        {
            if((i+x)==7)
            {
                cout << mat[i][x] <<", ";
            }
        }
    }
}
void leitura(int mat[][8])
{
    int i, x;
    srand(time(NULL));
    for(i = 0; i < 8; i++)
    {
        for(x = 0; x < 8; x++)
        {
            mat[i][x] = rand() % 100;

        }
    }
}


void mostra(int mat[][8])
{
    int i, x;
    for(i = 0; i < 8; i++)
    {
        for(x = 0; x < 8; x++)
        {
            cout << mat[i][x] << "\t";
        }
        cout << "\n";
    }
}

