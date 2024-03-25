#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<ctime>

using namespace std;
void gerar(int (*pmat)[5],int **tam)
{
    for(int *i = new int(0); *i < *(*tam); (*i)++)
    {
        for(int *j = new int(0); *j < 5; (*j)++)
        {
            pmat[*i][*j] = rand() % 100;
        }
    }
}
void mostrar(int (*pmat)[5],int **tam)
{
    cout << "Matriz gerada: "<<endl;
    for(int *i = new int(0); *i < *(*tam); (*i)++)
    {
        for(int *j = new int(0); *j < 5; (*j)++)
        {
            cout << pmat[*i][*j] << "\t";
        }
        cout << endl;
    }
}
void soma(int (*pmat)[5],int **tam)
{
    int *soma_DP = new int(0);
    int *soma_DS = new int(0);
    cout << "Diagonal Principal:";
    for(int *i = new int(0); *i <  *(*tam); (*i)++)
    {
        for(int *j = new int(0); *j < 5; (*j)++)
        {
            if(*i==*j)
            {
                *soma_DP+=pmat[*i][*j];
                cout<<pmat[*i][*j]<<", ";
            }
        }

    }
    cout<<"\n\n";
    cout<<"Soma dos elementos da DP: "<<*soma_DP<<"\n\n";
    cout << "Diagonal Secundária: ";
    for(int *i = new int(0); *i <  *(*tam); (*i)++)
    {
        for(int *j = new int(0); *j < 5; (*j)++)
        {
            if((*i+*j)==4)
            {
                *soma_DS+=pmat[*i][*j];
                cout<<pmat[*i][*j]<<", ";

            }
        }

    }
    cout<<"\n\n";
    cout<<"Soma dos elementos da DS: "<<*soma_DS<<"\n\n";

}
void inverte(int (*pmat)[5],int **tam)
{
    cout << "Matriz invertida: " << endl;

    int (*pmat_invertida)[5] = new int[*(*tam)][5];
    for (int *i = new int(0); *i < *(*tam); (*i)++)
    {
        for (int *j = new int(0); *j < 5; (*j)++)
        {
            pmat_invertida[*i][*j] = pmat[*(*tam) - 1 - *i][*j];
        }
    }

    for (int *i = new int(0); *i < *(*tam); (*i)++)
    {
        for (int *j = new int(0); *j < 5; (*j)++)
        {
            cout << pmat_invertida[*i][*j] << "\t";
        }
        cout << endl;
    }

    delete[] pmat_invertida;
}
main()
{
    setlocale(LC_ALL,"Portuguese");

    int *menu = new int(0);
    int *aux = new int(0);
    int *cont = new int(0);
    int *tam= new int;
    int (*pmat)[5] = new int[*tam][5];
    srand(time(NULL));
    do
    {
        system("cls");
        cout << "-----------------------------" << endl;
        cout << "-- Escolha uma das opções  --" << endl;
        cout << "-- 1 - Gerar matriz        --" << endl;
        cout << "-- 2 - Mostrar matriz      --" << endl;
        cout << "-- 3 - Soma das diagonais  --" << endl;
        cout << "-- 4 - Matriz invertida    --" << endl;
        cout << "-- 0 - Sair                --" << endl;
        cout << "-----------------------------" << endl;
        cout << "Sua escolha: ";
        cin >> *menu;
        fflush(stdin);

        switch(*menu)
        {
        case 1 :
            system("cls");
            (*cont)++;
            do
            {
                cout << "Informe o número de linhas da matriz: ";
                cin >> *tam;
                fflush(stdin);
            }
            while(*tam>20);
            pmat = new int[*tam][5];
            gerar(pmat,&tam);
            cout << "Valores gerados com sucesso! "<<endl;
            system("pause");
            break;
        case 2:
            system("cls");
            if(*cont==0)
            {
                cout << "Opção inválida! "<<endl;
                cout << "Primeiro gere a matriz! "<<endl;
            }
            else
            {
                mostrar(pmat,&tam);
            }
            system("pause");
            break;
        case 3:
            system("cls");
            if(*cont==0)
            {
                cout << "Opção inválida! "<<endl;
                cout << "Primeiro gere a matriz! "<<endl;
            }
            else
            {
                soma(pmat,&tam);
            }

            system("pause");
            break;
        case 4:
            system("cls");
            if (*cont == 0)
            {
                cout << "Opção inválida!" << endl;
                cout << "Primeiro gere a matriz!" << endl;
            }
            else
            {
                cout << "Matriz original: " << endl;
                mostrar(pmat,&tam);
                cout << endl;
                inverte(pmat,&tam);
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
    while(*menu != 0);

}

