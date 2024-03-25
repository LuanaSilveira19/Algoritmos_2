#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<cstring>
#include<ctime>


using namespace std;
void gerar(int vet[], int qtd);
void mostra(int vet[], int qtd);
void vet2(int x2[], int qtd);
void inter(int v3[20],int x1[10], int x2[10]);


void v3(int v3[], int qtd);

main()
{
    setlocale(LC_ALL,"Portuguese");

    int menu, x1[10], x2[10], x3[20], cont=0, j, x, i;

    do
    {
        system("cls");
        cout << "-----------------------------" << endl;
        cout << "-- Escolha uma das opções  --" << endl;
        cout << "-- 1 - Gerar vetores       --" << endl;
        cout << "-- 2 - Mostra              --" << endl;
        cout << "-- 3 - Intersecção         --" << endl;
        cout << "-- 0 - Sair                --" << endl;
        cout << "-----------------------------" << endl;
        cout << "Sua escolha: ";
        cin >> menu;
        fflush(stdin);

        switch(menu)
        {
        case 1 :
            system("cls");
            cont++;
            gerar(x1, 10);
            vet2(x2, 10);
            cout<<"\nVetores gerado com sucesso."<<endl;

            system("pause");

            break;
        case 2:
            system("cls");
            if(cont==0)
            {
                cout<<"\nOpição inválida."<<endl;
                cout<<"\nPrimeiro gere o vetor. Selecione a opção 1."<<endl;
            }
            else
            {
                cout<<"\nX1=";
                mostra(x1,10);
                cout<<endl;

                cout<<"\nX2=";
                mostra(x2,10);
                cout<<endl;
            }

            system("pause");

            break;

        case 3:
            system("cls");
            if(cont==0)
            {
                cout<<"\nOpição inválida."<<endl;
                cout<<"\nPrimeiro gere o vetor. Selecione a opção 1."<<endl;
            }
            else
            {
                cout<<"\nX1=";
                mostra(x1,10);
                cout<<endl;

                cout<<"\nX2=";
                mostra(x2,10);
                cout<<endl;

                cout<<"\nX3=";
                inter(x3,x1, x2);


                cout<<endl;



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


void gerar(int vet[], int qtd)
{
    int i, aux, cont=0, x;
    bool flag;
    srand(time(NULL));

    for(i = 0; i < qtd; i++)
    {
        aux = rand() % 35 + 50;
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
void vet2(int x2[], int qtd)
{
    int i, aux, cont=0, x;
    bool flag;
    srand(time(NULL));

    for(i = 0; i < qtd; i++)
    {
        aux = rand() % 50 + 35;
        cont++;
        if(i == 0)
            x2[i] = aux;
        else
        {
            flag = false;
            for(x = 0; x < i; x++)
            {
                if(aux == x2[x])
                {
                    //cout << "\nValor duplicado " << aux << endl;
                    flag = true;
                    break;
                }
            }
            if(flag) //mesma coisa que if(flag == true)
                i--;
            else
                x2[i] = aux;
        }

    }
}

void mostra(int vet[], int qtd)
{
    int i;
    for(i = 0; i < qtd; i++)
    {
        cout << vet[i] << ", ";
    }
}
void inter(int v3[20],int x1[10], int x2[10])
{
    int j,x;
    bool v3igual=false;
    j = 0;
    for(int i = 0; i < 10; i++)
    {
        for(x = 0; x < 10; x++)
        {
            if( x1[i] == x2[x])
            {
                for(int h=0; h<j; h++ )
                {
                    if(x1[i]==v3[h])
                    {
                        v3igual=true;
                    }
                }
                if(!v3igual)
                {
                    v3igual=false;
                    v3[j] =x1[i];
                    cout<< v3[j]  <<", ";
                    j++;
                    break;
                }

            }
        }
    }

}


