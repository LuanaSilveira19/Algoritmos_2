#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<ctime>

#define tam 7
using namespace std;
void gerar(int mat[tam][tam]);
void mostra(int mat[tam][tam]);
void principal(int mat[tam][tam]);
void simetrica(int mat[tam][tam]);
void acima(int mat[tam][tam]);
main()
{
    srand(time (NULL));
    setlocale(LC_ALL,"Portuguese");

    int menu, M[tam][tam], cont=0;

    do
    {
        system("cls");
        cout << "-----------------------------------------" << endl;
        cout << "-------- Escolha uma das opções ---------" << endl;
        cout << "-- 1 - Gerar valores para a matriz     --" << endl;
        cout << "-- 2 - Mostrar a matriz                --" << endl;
        cout << "-- 3 - Maior elemento na DP            --" << endl;
        cout << "-- 4 - Verificar simetria              --" << endl;
        cout << "-- 5 - Elementoa acima e abaixo da DP  --" << endl;
        cout << "-- 0 - Sair                            --" << endl;
        cout << "-----------------------------------------" << endl;
        cout << "Sua escolha: ";
        cin >> menu;
        fflush(stdin);

        switch(menu)
        {
        case 1 :
            system("cls");
            gerar(M);
            cout<<"\nMatriz gerada com sucesso."<<endl;
            cont++;
            system("pause");

            break;
        case 2:
            system("cls");
            if(cont==0)
            {

                cout<<"\nPrimeiro gere a matriz. Selecione a opção 1."<<endl;
            }
            else
            {
                cout<<"Matriz"<<endl;
                mostra(M);

            }
            system("pause");

            break;

        case 3:
            system("cls");
            if(cont==0)
            {

                cout<<"\nPrimeiro gere a matriz. Selecione a opção 1."<<endl;
            }
            else
            {
                cout<<"Matriz original"<<endl;
                mostra(M);
                cout<<endl;
                cout<<"Matriz com os maiores na DP"<<endl;
                principal(M);
            }
            system("pause");


            break;
        case 4:
            system("cls");
            if(cont==0)
            {

                cout<<"\nPrimeiro gere a matriz. Selecione a opção 1."<<endl;
            }
            else
            {
                cout<<"Matriz"<<endl;
                mostra(M);
                cout<<endl;
                simetrica(M);
            }
            system("pause");


            break;
             case 5:
            system("cls");
            if(cont==0)
            {

                cout<<"\nPrimeiro gere a matriz. Selecione a opção 1."<<endl;
            }
            else
            {
                cout<<"Matriz"<<endl;
                principal(M);
                cout<<endl;
                acima(M);
            }
            system("pause");


            break;
        case 0 :
            system("cls");
            cout << "\nPrograma finalizado.";
            getchar();
            break;

        }

    }
    while(menu != 0);

}

void acima(int mat[tam][tam])
{
    int idx, amat[tam][tam], valor, aux;
    for(int i=0; i<tam; i++)
    {
        for(int j=0; j<tam; j++)
        {
            amat[i][j]=mat[i][j];
        }
    }
    for(int i=0; i< tam; i++)
    {
        idx=0;
        aux= amat[i][idx];
        for(int j=0; j<tam; j++)
        {
            if(aux<amat[i][j])
            {
                aux=amat[i][j];
                idx=j;
            }
        }
        valor= amat[i][i];
        amat[i][i]=aux;
        amat[i][idx]=valor;
    }
cout<<"Elementos acima da DP:"<<endl;
for(int i=0; i<tam; i++)
    {
        for(int j=0; j<tam; j++)
        {
            if(i<j)
            {
                cout<<amat[i][j]<<", ";
            }
        }
    }
  cout<<endl;
cout<<endl;

cout<<"Elementos abaixo da DP:"<<endl;
for(int i=0; i<tam; i++)
    {
        for(int j=0; j<tam; j++)
        {
            if(i>j)
            {
                cout<<amat[i][j]<<", ";
            }
        }
    }
cout<<endl;
}
void simetrica(int mat[tam][tam])//a matriz nunca vai ser simétrica pois os números não se repetem
{
    int l, c, cont=0;
    bool resultado=false;
    for(l = 0; l < tam; l++)
    {
        for(c = 0; c < tam; c++)
        {
            if(mat[l][c]==mat[c][l])
            {
                resultado=true;
                cont++;
                break;
            }

        }
    }
    if(resultado && cont==21)
    {
        cout<<"A matriz é simétrica."<<endl;
    }
    else
    {
        cout<<"A matriz não é simetrica."<<endl;

    }
}

void gerar(int mat[tam][tam])
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
    for(int i=0; i<tam; i++)
    {
        for(int j=0; j<tam; j++)
        {

            mat[i][j]=nx[c];
            c++;
        }

    }
}
void principal(int mat[tam][tam])
{
    int idx, amat[tam][tam], valor, aux;
    for(int i=0; i<tam; i++)
    {
        for(int j=0; j<tam; j++)
        {
            amat[i][j]=mat[i][j];
        }
    }
    for(int i=0; i< tam; i++)
    {
        idx=0;
        aux= amat[i][idx];
        for(int j=0; j<tam; j++)
        {
            if(aux<amat[i][j])
            {
                aux=amat[i][j];
                idx=j;
            }
        }
        valor= amat[i][i];
        amat[i][i]=aux;
        amat[i][idx]=valor;


    }

    mostra(amat);
}

void mostra(int mat[tam][tam])
{
    int l, c;

    for(l = 0; l < tam; l++)
    {
        for(c = 0; c < tam; c++)
        {

            cout << mat[l][c] << "\t";


        }
        cout << "\n";
    }
}






































































































