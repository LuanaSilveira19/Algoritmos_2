#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<ctime>


using namespace std;

void gerar(int vet[], int qtd);
void mostra(int vet[], int qtd);
void ordenaC(int vet[], int qtd);
void ordenaD(int vet[], int qtd);

main()
{
    setlocale(LC_ALL,"Portuguese");

    int menu, a[10], cont=0;

    do
    {
        system("cls");
        cout << "-----------------------------" << endl;
        cout << "-- Escolha uma das opções  --" << endl;
        cout << "-- 1 - Gerar valores       --" << endl;
        cout << "-- 2 - Mostrar vetor       --" << endl;
        cout << "-- 3 - Mostrar ordenado    --" << endl;
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
            gerar(a, 10);

            cout<<"\nVetor gerado com sucesso."<<endl;
            system("pause");

            break;
        case 2:
            system("cls");
            if(cont!=1)
            {
                cout<<"\nOpição inválida."<<endl;
                cout<<"\nPrimeiro gere o vetor. Selecione a opção 1."<<endl;
            }
            else
            {
                cout<<"\nVetor:";
                mostra(a,10);
                cout<<endl;
            }

            system("pause");

            break;

        case 3:
            system("cls");
            if(cont!=1)
            {
                cout<<"\nOpição inválida."<<endl;
                cout<<"\nPrimeiro gere o vetor. Selecione a opção 1."<<endl;
            }
            else
            {
                ordenaC(a, 10);
                cout << "\n\nVetor em ordem crescente: " << endl;
                mostra(a, 10);
                cout<<endl;
                ordenaD(a, 10);
                cout << "\n\nVetor em ordem decrescente: " << endl;
                mostra(a, 10);
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
        aux = rand() % 29 + 21;
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

void mostra(int vet[], int qtd)
{
    int i;
    for(i = 0; i < qtd; i++)
    {
        cout << vet[i] << ", ";
    }
}

void ordenaC(int vet[], int qtd)
{
    int i, x, aux;
    for(i = 0; i < qtd-1; i++)
    {
        for(x = i + 1; x < qtd; x++)
        {
            if(vet[i] > vet[x])
            {
                aux = vet[i];
                vet[i] = vet[x];
                vet[x] = aux;
            }
        }
    }
}

void ordenaD(int vet[], int qtd)
{
    int i, x, aux;
    for(i = 0; i < qtd-1; i++)
    {
        for(x = i + 1; x < qtd; x++)
        {
            if(vet[i] < vet[x])
            {
                aux = vet[i];
                vet[i] = vet[x];
                vet[x] = aux;
            }
        }
    }
}


