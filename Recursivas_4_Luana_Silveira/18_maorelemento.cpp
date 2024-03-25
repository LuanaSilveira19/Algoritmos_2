#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<ctime>

using namespace std;
void gerar(int mat[5][5]);
void mostra(int mat[5][5]);
void d(int mat[5][5]);
main()
{
    srand(time (NULL));
    setlocale(LC_ALL,"Portuguese");
    int M[5][5];

    gerar(M);
    cout<<"Matriz gerada"<<endl;
    mostra(M);
    cout<<endl;

    d(M);
}
void d(int mat[5][5])
{
    int maior= mat[0][0], i=0, j=0;
    cout<<"Matriz Diagonal Principal"<<endl;
    for(int l = 0; l < 5; l++)
    {
        for(int c = 0; c < 5; c++)
        {

            if(l==c)
                cout << mat[l][c] << ", ";
            if(mat[l][c]>maior )
            {
                maior=mat[l][c];
                i=l;
                j=c;
            }
        }
    }
    cout<<endl;
    cout<<endl;
    cout<<"Matriz Diagonal Secundária"<<endl;
    for(int l = 0; l < 5; l++)
    {
        for(int c = 0; c < 5; c++)
        {

            if((l+c)==4)
                cout << mat[l][c] << ", ";
        }
    }
    cout<<endl;
    cout<<endl;
    cout<<"Maior elemento da matriz está na linha "<<i<<" e na coluna "<<j<<endl;

}
void gerar(int mat[5][5])
{
    int idx, nx[100], aux;

    for(int x=1; x<=99; x++)
    {
        nx[x-1]=x;
    }
    for(int i=99; i>0; i--)
    {
        idx=rand()%(i+1);
        aux=nx[idx];
        nx[idx]=nx[i];
        nx[i]=aux;
    }
    int c=0;
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {

            mat[i][j]=nx[c];
            c++;
        }

    }
}

void mostra(int mat[5][5])
{
    for(int l = 0; l < 5; l++)
    {
        for(int c = 0; c < 5; c++)
        {

            cout << mat[l][c] << "\t";


        }
        cout << "\n";
    }
}
