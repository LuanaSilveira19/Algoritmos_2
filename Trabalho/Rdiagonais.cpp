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
void diagonalP( int tam,int matriz[][5], int l = 0)
{

    if (l == tam)
    {
        return;
    }
    else
    {
        cout << matriz[l][l] << " ";
        diagonalP(tam,matriz, l + 1);
    }

}

void diagonalS( int tam,int matriz[][5], int l, int c)
{

    if (l == tam)
    {
        return;
    }
    else
    {
        if((l+c)==tam-1)
        {
            cout<<matriz[l][c]<<" ";
            diagonalS(tam,matriz, l+1, c);
        }
        diagonalS(tam,matriz, l, c-1);
    }

}

void acimaDP( int tam,int matriz[][5], int l, int c)
{
    if (l == tam)
    {
        return ;
    }
    else
    {
        if(c>l)
        {
            cout<<matriz[l][c]<<" ";

        }
        if(c==0)
        {
            acimaDP(tam,matriz,l+1,c=4);
        }
        else
        {
            acimaDP(tam,matriz,l,c-1);
        }

    }

}

void abaixoDP( int tam,int matriz[][5], int l, int c)
{
    if (l == tam)
    {
        return ;
    }
    else
    {
        if(l>c)
        {
            cout<<matriz[l][c]<<" ";

        }
        if(c==tam)
        {
            abaixoDP(tam,matriz,l+1,c=0);
        }
        else
        {
            abaixoDP(tam,matriz,l,c+1);
        }

    }

}

int main()
{
    int matriz[5][5];

    cout<<"Elementos da matriz: "<<endl;
    gerarMatriz(5, matriz, 0, 0);
    cout<<endl;
    cout<<endl;
    cout<<"Elementos acima: ";
    acimaDP(5,matriz,0,4);
    cout<<endl;
    cout<<endl;
    cout<<"Elementos abaixo: ";
    abaixoDP(5,matriz,0,0);
    cout<<endl;
    cout<<endl;
    cout<<"Diagonal Principal: ";
    diagonalP( 5,matriz, 0);
    cout<<endl;
    cout<<endl;
    cout<<"Diagonal Secundaria: ";
    diagonalS(5, matriz, 0, 5);
    cout<<endl;
    cout<<endl;
}
