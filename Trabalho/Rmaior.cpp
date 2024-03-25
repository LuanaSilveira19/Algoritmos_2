#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<ctime>

using namespace std;


void gerarMatriz(int tam, int matriz[][5], int l, int c)
{
    if (l == tam)
    {
        return;
    }

    if (c == tam)
    {
        cout<<endl;
        gerarMatriz(tam, matriz, l + 1, 0);

        return;
    }
    matriz[l][c] = rand()%50+10;
    cout << matriz[l][c] << " ";
    gerarMatriz(tam, matriz, l, c + 1);

}



void maior(int matriz[][5])
{
    int aux=0;
    aux=matriz[0][0];

    for(int l=0; l<5; l++)
    {
        for(int c=0; c<5; c++)
        {
            if(matriz[l][c] > aux )
            {
                aux=matriz[l][c];

            }
        }

    }
    cout<<aux;
}

main()
{
    setlocale(LC_ALL,"Portuguese");

    int matriz[5][5];
    srand(time(NULL));
    cout<<"Elementos da matriz: "<<endl;
    gerarMatriz(5, matriz, 0, 0);

    cout<<"Maior: ";
    maior(matriz);
}
