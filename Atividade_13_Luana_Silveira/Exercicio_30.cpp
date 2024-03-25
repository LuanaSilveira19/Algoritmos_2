#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<fstream>
#include<cstring>


using namespace std;
void informa()
{
    string nome;
    ofstream escreve;
    escreve.open("cadastro.txt", ios::app);

    if(escreve.is_open())
    {
        cout << "Arquivo aberto com sucesso."<<endl;
        cout << "Informe o nome para gravar no arquivo: ";
        getline(cin, nome);
        fflush(stdin);
        escreve << nome;
        escreve << "\n";
    }
    else
    {
        cout << "Erro ao abrir o arquivo";
    }
    escreve.close();
}
void leitura()
{
    char texto[100];
    ifstream ler("cadastro.txt", ios::in);
    if(ler.is_open())
    {
        cout << "\nLeitura realizada com sucesso" << endl;
        while(ler.getline(texto,100))
        {
            cout << texto << endl;
        }
    }
    else
    {
        cout << "Erro ao abrir o arquivo";
    }
    ler.close();
}
void consulta()
{
    char texto[100];
     string nome;
     bool flag=true;
    ifstream ler("cadastro.txt", ios::in);
    if(ler.is_open())
    {
        cout << "Informe um nome para verificar: ";
        getline(cin, nome);
        fflush(stdin);


        while(ler.getline(texto,100))
        {
            if(texto== nome)
            {
                flag=false;
             cout<<"O nome informado EXISTE no arquivo"<<endl;
            }
        }
        if(flag)
        cout<<"O nome informado NÃO EXISTE no arquivo"<<endl;
    }
    else
    {
        cout << "Erro ao abrir o arquivo";
    }
    ler.close();
}
main()
{
    setlocale(LC_ALL,"Portuguese");
    int menu=0;
    do
    {
        system("cls");
        cout << "-----------------------------" << endl;
        cout << "------- Arquivo Texto -------" << endl;
        cout << "-- 1 - Cadastrar           --" << endl;
        cout << "-- 2 - Mostrar             --" << endl;
        cout << "-- 3 - Consultar           --" << endl;
        cout << "-- 0 - Sair                --" << endl;
        cout << "-----------------------------" << endl;
        cout << "Sua escolha: ";
        cin >> menu;
        fflush(stdin);

        switch(menu)
        {
        case 1 :
            system("cls");
            informa();
            system("pause");
            break;
        case 2 :
            system("cls");
            leitura();
            system("pause");
            break;

        case 3:
            system("cls");
            consulta();
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
