#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<fstream>
#include<ctime>

using namespace std;

void gerar(int vet[])
{
    int i, aux, cont=0, x;

    bool flag;
    srand(time(NULL));
    for(i = 0; i < 20; i++)
    {

        aux = 5+ rand() % 45 + 1;
        if(i == 0)
            vet[i] = aux;
        else
        {
            flag = false;
            for(x = 0; x < i; x++)
            {
                if(aux == vet[x])
                {
                    flag = true;
                    break;
                }
            }
            if(flag)
                i--;
            else
                vet[i] = aux;
        }
    }
}
void escrever(int vet[])
{
    ofstream escreve;
    escreve.open("vetor.txt", ios::app);

    if(escreve.is_open())
    {
        cout << "Arquivo aberto com sucesso."<<endl;
        escreve<<"\nVetor: ";
        for(int i=0; i<20; i++)
        {
            escreve << vet[i];
            escreve << ", ";
        }
    }
    else
    {
        cout << "Erro ao abrir o arquivo";
    }
    escreve.close();
}
void ler(int vet[])
{
    char texto;
    ifstream ler("vetor.txt", ios::in);
    if(ler.is_open())
    {
        cout << "\nLeitura realizada com sucesso" << endl;
        while(ler.get(texto))
        {
            cout <<texto;
        }
    }
    else
    {
        cout << "Erro ao abrir o arquivo";
    }
    cout<<endl;
    ler.close();
}
main()
{
    setlocale(LC_ALL,"Portuguese");
    int menu=0, cont=0;
    int vet[20];

    do
    {
        system("cls");
        cout << "-----------------------------" << endl;
        cout << "----- Arquivo Texto Vetor ---" << endl;
        cout << "-- 1 - Gerar valores       --" << endl;
        cout << "-- 2 - Escrever            --" << endl;
        cout << "-- 3 - Ler arquivo         --" << endl;
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
            gerar(vet);
            cout<<"Valores gerados com sucesso"<<endl;
            system("pause");
            break;
        case 2 :
            system("cls");
            if(cont==0)
            {
                cout<<"Primeiro execute a opção 1!"<<endl;
            }
            else{
                    escrever(vet);
            }
            system("pause");
            break;

        case 3:
            system("cls");
             if(cont==0)
            {
                cout<<"Primeiro execute a opção 1!"<<endl;
            }
            else
            {
                 ler(vet);
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
