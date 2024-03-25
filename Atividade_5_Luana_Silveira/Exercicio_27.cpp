#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<cstring>

using namespace std;

struct ContaBancaria
{
    int numero;
    string nome;
    float saldo;
};

void cadastrar_contas(ContaBancaria contas[], int& num_contas)
{

    if (num_contas >= 10)
    {
        cout << "Número máximo de contas cadastradas alcançado." << endl;
        return;
    }

    int numero;
    string nome;
    float saldo;

    cout << "Digite o número da conta: ";
    cin >> numero;

    for (int i = 0; i < num_contas; i++)
    {
        if (contas[i].numero == numero)
        {
            cout << "Já existe uma conta com esse número." << endl;
            return;
        }
    }

    cout << "Digite o nome do cliente: ";
    cin.ignore();
    getline(cin, nome);

    cout << "Digite o saldo da conta: ";
    cin >> saldo;

    ContaBancaria nova_conta = {numero, nome, saldo};
    contas[num_contas] = nova_conta;

    cout << "Conta cadastrada com sucesso!" << endl;
    num_contas++;
}

void visualizar_conta(ContaBancaria contas[], int num_contas)
{
    int numero;

    cout << "Digite o número da conta: ";
    cin >> numero;

    for (int i = 0; i < num_contas; i++)
    {
        if (contas[i].numero == numero)
        {
            cout << "-------------Dados da Conta----------" << endl;
            cout << "Número da conta: " << contas[i].numero << endl;
            cout << "Nome do cliente: " << contas[i].nome << endl;
            cout << "Saldo da conta: R$" << contas[i].saldo << endl;
            cout << "-------------------------------------" << endl;
            return;
        }
    }

    cout << "Conta não encontrada." << endl;
}
void depositar(ContaBancaria contas[], int num_contas)
{
    int numero;
    float valor;

    cout << "Digite o número da conta: ";
    cin >> numero;

    for (int i = 0; i < num_contas; i++)
    {
        if (contas[i].numero == numero)
        {
            cout << "Digite o valor a ser depositado: ";
            cin >> valor;
            contas[i].saldo += valor;
            cout << "Depósito realizado com sucesso!" << endl;
            cout << "Novo saldo da conta: R$" << contas[i].saldo << endl;
            return;
        }
    }

    cout << "Conta não encontrada." << endl;
}
void sacar(ContaBancaria contas[], int num_contas)
{
    int numero;
    float valor;

    cout << "Digite o número da conta: ";
    cin >> numero;

    for (int i = 0; i < num_contas; i++)
    {
        if (contas[i].numero == numero)
        {
            cout << "Digite o valor a ser sacado: ";
            cin >> valor;
            if (valor > contas[i].saldo)
            {
                cout << "Saldo insuficiente para realizar o saque." << endl;
                return;
            }
            contas[i].saldo -= valor;
            cout << "Saque realizado com sucesso!" << endl;
            cout << "Novo saldo da conta: R$" << contas[i].saldo << endl;
            return;
        }
    }

    cout << "Conta não encontrada." << endl;
}

void pix(ContaBancaria contas[], int num_contas)
{
    int numero_orig;
    int numero_dest;
    float valor;

    cout << "Digite o número da conta de origem: ";
    cin >> numero_orig;
    cout << "Digite o número da conta de destino: ";
    cin >> numero_dest;

    for (int i = 0; i < num_contas; i++)
    {
        if (contas[i].numero == numero_orig)
        {
            cout << "Digite o valor a ser transferido: ";
            cin >> valor;
            if (valor > contas[i].saldo)
            {
                cout << "Saldo insuficiente para realizar a transferencia." << endl;
                return;
            }
            contas[i].saldo -= valor;
            cout << "Valor transferido com sucesso!" << endl;
            for (int a = 0; a < num_contas; a++)
            {
                if (contas[a].numero == numero_dest)
                {
                    contas[a].saldo += valor;

                    return;
                }
            }
            return;
        }
    }


    cout << "Conta não encontrada." << endl;
}
main()
{
    setlocale(LC_ALL, "Portuguese");

    ContaBancaria contas[10];
    int menu = -1, indice = 0, n,d, cont=0;
    bool existe=false;

    do
    {
        system("cls");
        cout << "---------------------------------" << endl;
        cout << "----------Contas bancárias-------" << endl;
        cout << "-- 1 Cadastrar contas          --" << endl;
        cout << "-- 2 Visualizar dados da conta --" << endl;
        cout << "-- 3 Depositar                 --" << endl;
        cout << "-- 4 Sacar                     --" << endl;
        cout << "-- 5 PIX                       --" << endl;
        cout << "-- 0 Sair                      --" << endl;
        cout << "---------------------------------" << endl;
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
            cadastrar_contas( contas,indice);
            system("pause");
            break;

        case 2:
            system("cls");
            if(cont < 1)
                cout << "Nenhum cliente cadastrado!";
            else
            {
                visualizar_conta(contas,indice);
            }

            system("pause");
            getchar();
            break;
        case 3:
            system("cls");
            if(cont < 1)
                cout << "Nenhum cliente cadastrado!";
            else
            {
                depositar(contas,indice);
            }
            system("pause");
            getchar();
            break;
        case 4:
            system("cls");
            if(cont < 1)
                cout << "Nenhum cliente cadastrado!";
            else
            {
                sacar(contas,indice);
            }
            system("pause");
            getchar();
            break;
        case 5:
            system("cls");
            if(cont < 1)
                cout << "Nenhum cliente cadastrado!";
            else
            {
                pix(contas,indice);
            }
            system("pause");
            getchar();
            break;
        }///////

    }
    while (menu != 0);

}
