#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<ctime>

using namespace std;
void gerar(int **v)
{
    int *i = new int(0);
    int *aux = new int(0);
    bool *igual = new bool(false);
    while(*i < 20)
    {
        *aux=rand()% 50;
        if(*i==0)
        {
            (*v)[*i] = *aux;
        }
        else
        {
            *igual=false;
            for(int *x = new int(0); *x< *i; (*x)++)
            {
                if(*aux==  (*v)[*x])
                {
                    *igual=true;
                    break;
                }
            }
            if( *igual)
                (*i)--;
            else
                (*v)[*i]  = *aux;
        }
        (*i)++;
    }

}
void achar(int **v, int **MIN, int **MAX)
{
    for(int *x = new int(0); *x<20; (*x)++)
    {
        if(*(*MAX)<(*v)[*x])
        {
            *(*MAX)=(*v)[*x];
        }
        if(*(*MIN)>(*v)[*x])
        {
            *(*MIN)=(*v)[*x];
        }
    }

}
void mostra(int **v, int **MIN, int **MAX)
{
    cout<<"Vetor:";
    for(int *x = new int(0); *x<20; (*x)++)
    {
        cout<<(*v)[*x]<<", ";
    }
    cout<<endl;
    cout<<"Maior valor:"<<*(*MAX)<<endl;
    cout<<"Menor valor:"<<*(*MIN)<<endl;
}
void calcula(int **v)
{
    int *impar = new int(0);
    int *par = new int(0);
    cout<<"Vetor:";
    for(int *x = new int(0); *x<20; (*x)++)
    {
        cout<<(*v)[*x]<<", ";
    }
    cout<<endl;
    for(int *x = new int(0); *x<20; (*x)++)
    {
        if((*v)[*x]%2==0)
        {
            (*par)++;
        }
        else
        {
            (*impar)++;
        }
     }
     cout << fixed;
    cout.precision(2);
   cout<<"Percetual de "<<(*par * 100.0)/ 20.0<<"% de valores pares."<<endl;
   cout<<"Percetual de "<<(*impar * 100.0)/ 20.0<<"% de valores impares."<<endl;


}
main()
{
    setlocale(LC_ALL,"Portuguese");

    int *cont = new int(0);
    int *aux = new int(0);
    int *menu = new int(0);
    int *vet= new int[20];
    int *MAX = new int(0);
    int *MIN = new int(50);
    srand(time(NULL));
    do
    {
        system("cls");
        cout << "-----------------------------" << endl;
        cout << "-- 1 - Gerar vetor         --" << endl;
        cout << "-- 2 - Achar maior e menor --" << endl;
        cout << "-- 3 - Mostra              --" << endl;
        cout << "-- 4 - Calcula             --" << endl;
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
            gerar(&vet);
            cout<<"Vetor gerado!"<<endl;
            system("pause");
            break;
        case 2:
            system("cls");
            (*aux)++;
            if(*cont==0)
            {
                cout << "Opção inválida! "<<endl;
                cout << "Primeiro gere o vetor! "<<endl;
            }
            else
            {
                achar(&vet,&MIN,&MAX);
                cout << "Maior e menor valor encontrados! "<<endl;
            }
            system("pause");
            break;
        case 3:
            system("cls");
            if(*cont==0 || *aux==0)
            {
                cout << "Opção inválida! "<<endl;
                cout << "Primeiro gere o vetor e acione a opção 2! "<<endl;
            }
            else
            {
                mostra(&vet,&MIN,&MAX);
            }
            system("pause");
            break;
        case 4:
            system("cls");
            if(*cont==0)
            {
                cout << "Opção inválida! "<<endl;
                cout << "Primeiro gere o vetor! "<<endl;
            }
            else
            {
                calcula(&vet);
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
