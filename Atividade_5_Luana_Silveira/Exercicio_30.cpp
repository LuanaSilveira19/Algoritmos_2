#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<cstring>

using namespace std;

struct Jogador
{
    int numeroCamisa;
    float peso;
    float distanciaPercorrida;
    float tempoAtividade;
    float velocidademedia;
    float calorias;
};

void Cadastrar_atleta(Jogador j[], int i)
{


    cout << "Digite o numero da camisa do jogador: ";
    cin >> j[i].numeroCamisa;
    fflush(stdin);
    cout << "Digite o peso do jogador: ";
    cin >> j[i].peso;
    fflush(stdin);
    cout << "Digite a distância percorrida pelo jogador: ";
    cin >> j[i].distanciaPercorrida;
    fflush(stdin);
    cout << "Digite o tempo de atividade: ";
    cin >>j[i].tempoAtividade;
    fflush(stdin);
    cout << "Jogador registrado! "<<endl;
}

void visualizar_jogadores(Jogador j[], int i)
{

    cout << "--------------------Dados dos jogadores----------------------" << endl;
    for (int a = 0; a < i; a++)
    {
        cout << "Número da camisa: " << j[a].numeroCamisa << endl;
        cout << "Peso: " <<  j[a].peso<<" Kg" << endl;
        cout << "Distância percorrida: " << j[a].distanciaPercorrida<<" Km/h" << endl;
        cout << "Tempo: " << j[a].tempoAtividade<<" min" << endl;
        cout << "-------------------------------------------------------------" << endl;

    }

}
void velocidade_media(Jogador j[], int i)
{
    cout << "----------------------Velocidade Média-----------------------" << endl;
    for (int a = 0; a < i; a++)
    {
        j[a].velocidademedia=j[a].distanciaPercorrida/j[a].tempoAtividade;
        cout << "O jogador da camiseta " << j[a].numeroCamisa << " teve a velocidade média de: ";
        cout<<j[a].velocidademedia <<" Km/h."<< endl;
        cout<< "--------------------------------------------------------------------------" << endl;

    }
}
void distancia_percorrida(Jogador j[], int i)
{
    int aux;
    cout << "----------------------Distância em ordem decrescente-----------------------" << endl;
    for (int a = 0; a < i-1; a++)
    {
        for (int b = a+1; b < i; b++)
        {
            if(j[a].distanciaPercorrida<j[b].distanciaPercorrida)
            {
                aux=j[a].distanciaPercorrida;
                j[a].distanciaPercorrida=j[b].distanciaPercorrida;
                j[b].distanciaPercorrida=aux;
            }
        }
    }
     for (int a = 0; a <i; a++)
    {
        cout << "O jogador da camiseta " << j[a].numeroCamisa << " percorreu ";
        cout<<j[a].distanciaPercorrida<<" Km/h."<< endl;
        cout << "--------------------------------------------------------------------------" << endl;
    }
}

void maior_menor_cal(Jogador j[], int i)
{
    float maior, menor;
    for (int a = 0; a <i; a++)
    {
        j[a].calorias= j[a].velocidademedia * j[a].peso * 0.0175;
    }

    maior=menor=j[0].calorias;
    for(int a=0; a<i; a++)
    {
        if(maior<j[a].calorias)
        {
            maior=j[a].calorias;
        }
        if(menor>j[a].calorias)
        {
            menor=j[a].calorias;
        }
    }

    cout<<"Maior consumo de calorias: "<<maior<<endl;
    cout<<"Menor consumo de calorias: "<<menor<<endl;
}
main()
{
    setlocale(LC_ALL, "Portuguese");
    Jogador j[10];
    int menu = -1, indice = 0, cont=0;


    do
    {
        system("cls");
        cout << "-------------------------------------------------" << endl;
        cout << "---------------Clube de futebol------------------" << endl;
        cout << "-- 1 Cadastrar atleta                          --" << endl;
        cout << "-- 2 Mostrar todos os cadastrados              --" << endl;
        cout << "-- 3 Velocidade média de cada jogador          --" << endl;
        cout << "-- 4 Distância percorrida em ordem decrescente --" << endl;
        cout << "-- 5 Maior e menor consumo de calorias         --" << endl;
        cout << "-- 0 Sair                                      --" << endl;
        cout << "-------------------------------------------------" << endl;
        cout << "Sua escolha: ";
        cin >> menu;
        fflush(stdin);
        switch(menu)
        {
        case 0:
            system("cls");
            cout << "Programa finalizado!";
            system("pause");
            break;
        case 1:
            system("cls");
            cont++;
            Cadastrar_atleta(j,indice);
            indice++;
            system("pause");
            break;

        case 2:
            system("cls");
            if(cont < 1)
                cout << "Nenhum jogador cadastrado!";
            else
            {
                visualizar_jogadores(j,indice);
            }

            system("pause");
            getchar();
            break;
        case 3:
            system("cls");
            if(cont < 1)
                cout << "Nenhum jogador cadastrado!";
            else
            {
                velocidade_media(j,indice);
            }

            system("pause");
            getchar();
            break;
         case 4:
            system("cls");
            if(cont < 1)
                cout << "Nenhum jogador cadastrado!";
            else
            {
                distancia_percorrida(j,indice);
            }

            system("pause");
            getchar();
            break;
        case 5:
            system("cls");
            if(cont < 1)
                cout << "Nenhum jogador cadastrado!";
            else
            {

                 maior_menor_cal(j,indice);
            }

            system("pause");
            getchar();
            break;


        }///////

    }
    while (menu != 0);

}
