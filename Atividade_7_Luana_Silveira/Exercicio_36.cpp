#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<cstring>

using namespace std;

struct pessoas
{
    string nome;
    int idade;
};

void cadastrar(pessoas v[], int &i)
{
    if (i >= 20)
    {
        cout << "Limite máximo de pessoas atingido." << endl;
        return;
    }


    cout << "Digite o nome da pessoa: ";
    getline(cin, v[i].nome);
    fflush(stdin);


    cout << "Digite a idade da pessoa: ";
    cin >> v[i].idade;


    i++;

    cout << "Pessoa cadastrada com sucesso!" << endl;
}

void maior_menor(pessoas v[], int i)
{

    pessoas MaisVelha = v[0];
    pessoas MaisNova = v[0];

    for (int a = 1; a < i; a++)
    {
        if (v[a].idade > MaisVelha.idade)
        {
            MaisVelha = v[a];
        }
        if (v[a].idade < MaisNova.idade)
        {
            MaisNova = v[a];
        }
    }

    cout << "A pessoa mais velha é: " << MaisVelha.nome << ", " << MaisVelha.idade << " anos." << endl;
    cout << "A pessoa mais nova é:  " << MaisNova.nome << ", " << MaisNova.idade << " anos." << endl;
}
void media(pessoas v[], int i)
{

    int soma= 0;
    for (int a = 0; a< i; a++)
    {
        soma += v[a].idade;
    }

    cout << "Média das idades: " <<soma / (float) i << " anos." << endl;
}

main()
{
    setlocale(LC_ALL, "Portuguese");

    pessoas v[20];
    int menu = -1, cont=0, i=0;


    do
    {
        system("cls");
        cout << "-------------------------------------" << endl;
        cout << "----------------Pessoas--------------" << endl;
        cout << "-- 1 Cadastrar pessoas             --" << endl;
        cout << "-- 2 Pessoa de maior e menor idade --" << endl;
        cout << "-- 3 Média das idades              --" << endl;
        cout << "-- 0 Sair                          --" << endl;
        cout << "-------------------------------------" << endl;
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
            cadastrar( v,i);
            system("pause");
            break;

        case 2:
            system("cls");
            if(cont < 1)
                cout << "Nenhuma pessoa cadastrada!";
            else
            {
               maior_menor(v,i);
            }

            system("pause");
            getchar();
            break;

        case 3:
            system("cls");
            if(cont < 1)
                cout << "Nenhuma pessoa cadastrada!";
            else
            {
                media(v,i);
            }

            system("pause");
            getchar();
            break;

        }///////

    }
    while (menu != 0);


}
