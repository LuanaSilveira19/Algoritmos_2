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


int main()
{
    srand(time(NULL));
    int matriz[5][5];

 cout<<"Elementos da matriz: "<<endl;
 gerarMatriz(5, matriz, 0, 0);


}

