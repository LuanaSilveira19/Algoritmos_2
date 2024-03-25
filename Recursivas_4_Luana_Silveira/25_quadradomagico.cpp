#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<ctime>

using namespace std;
void leitura(int mat[3][3]);
void mostra(int mat[3][3]);
int soma(int mat[3][3]);

void nova_mat(int mat[3][3]);

int leitura(char texto[50]);
main()
{
    setlocale(LC_ALL,"portuguese");
    int M[3][3], cont=0;

    do
    {

        leitura(M);
        cout<<"Matriz gerada:"<< endl;
        mostra(M);
        cout<< endl;
        cont++;


        if(soma(M)==1)
        {
            cout<<" A matriz NÃO é um quadrado mágico"<<endl;
        }
        else
        {
            cout<<" A matriz É um quadrado mágico"<<endl;
        }
        system("pause");
    }
    while(soma(M)==1 && cont<11);


    if(soma(M)==1 && cont==11)
    {

        nova_mat(M);
        for(int l=0; l<3; l++)
        {
            for(int c=0; c<3; c++)
            {
                cout<<M[l][c]<<"\t";
            }
            cout<<"\n";
        }
        if(soma(M)==0)
        {
            cout<<" A matriz É um quadrado mágico"<<endl;
        }
        else
        {
            cout<<" A matriz NÃO é um quadrado mágico"<<endl;
        }


    }

}
void nova_mat(int mat[3][3])
{
    cout<<"Informe os números para preencher a matriz"<<endl;
    for(int l=0; l<3; l++)
    {
        for(int c=0; c<3; c++)
        {
            cout<<"Informe o valor ["<<l<<"]["<<c<<"]:";
            cin>>mat[l][c];
            fflush(stdin);
        }
    }

}

void leitura(int mat[3][3])
{
    int l, c;
    srand(time(NULL));
    for(l = 0; l < 3; l++)
    {
        for(c = 0; c < 3; c++)
        {
            mat[l][c] = rand() % 11;
        }
    }
}
void mostra(int mat[3][3])
{
    int l, c;

    for(l = 0; l < 3; l++)
    {
        for(c = 0; c < 3; c++)
        {

            cout << mat[l][c] << "\t";

        }
        cout << "\n";
    }
}

int soma(int mat[3][3])
{
    int DP=0, DS=0, C0=0, C1=0, C2=0, L0=0, L1=0, L2=0;
    for(int l = 0; l < 3; l++)
    {
        for(int c = 0; c < 3; c++)
        {
            if(l==c)
            {
                DP+=mat[l][c];
            }
            if((l+c)==2)
            {
                DS+=mat[l][c];

            }
            if(c==0)
            {
                C0+=mat[l][c];
            }
            if(c==1)
            {
                C1+=mat[l][c];
            }
            if(c==2)
            {
                C2+=mat[l][c];
            }
            if(l==0)
            {
                L0+=mat[l][c];
            }
            if(l==1)
            {
                L1+=mat[l][c];
            }
            if(l==2)
            {
                L2+=mat[l][c];
            }

        }
    }


    if(DP == DS && DP == C0 && DP == C1 && DP == C2 && DP == L0 && DP == L1 && DP == L2)
    {
        return 0;
    }
    else
    {

        return 1;
    }

}
