#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<ctime>

using namespace std;

void gerarXY(int **X, int **Y)
{

    int *i = new int(0);
    int *auX = new int(0);
    int *auY = new int(0);
    srand(time(NULL));
    while(*i < 10)
    {
        (*X)[*i]=rand()% 13;
        (*Y)[*i]=rand()% 13;
        (*i)++;
    }

    cout<<"X:  ";
    for(int *x = new int(0); *x< 10; (*x)++)
    {
        cout << (*X)[*x] << "| ";
    }

    cout<<endl;
    cout<<"Y:  ";
    for(int *x = new int(0); *x< 10; (*x)++)
    {
        cout << (*Y)[*x]  << "| ";

    }
}
void uniaoXY(int **X, int **Y, int **U)
{
    int *i = new int(0);
    int *a = new int(0);
    while(*i<20)
    {
        while(*a<10)
        {
            (*U)[*i]=*(*X);
            (*i)++;
            (*a)++;
            (*X)++;
        }
        while(*a<20)
        {
            (*U)[*i]=*(*Y);
            (*Y)++;
            (*a)++;
            (*i)++;
        }
    }
    (*X)-=10;
    (*Y)-=10;
    bool *flag;
    cout<<endl;
    cout<<"A)União:";
    for(int *x = new int(0); *x< 20; (*x)++)
    {
        *flag=false;
        for(int *j = new int(0); *j< *x; (*j)++)
        {
            if((*U)[*x]==(*U)[*j])
            {
                *flag=true;
                break;
            }
        }
        if(*flag==false)
        {
            cout <<(*U)[*x]<< ", ";
        }
    }
}
void soma(int **X, int **Y)
{
    cout<<endl;
    cout<<"C)Soma:";
    for(int *x = new int(0); *x< 10; (*x)++)
    {
        cout << (*X)[*x]+ (*Y)[*x] << ", ";

    }
}
void produto(int **X, int **Y)
{
    cout<<endl;
    cout<<"D)Produto:";
    for(int *x = new int(0); *x< 10; (*x)++)
    {
        cout << (*X)[*x] * (*Y)[*x] << ", ";

    }
}
void interseccao(int **X, int **Y, int **A)
{
    int *aux = new int(0);
    for(int *i = new int(0); *i< 10; (*i)++)
    {
        for(int *x = new int(0); *x< 10; (*x)++)
        {
            if((*X)[*i]==(*Y)[*x])
            {
                *(*A)=(*X)[*i];
                (*A)++;
                (*aux)++;
            }
        }
    }
    (*A)-=*aux;
    bool *flag;
    cout<<endl;
    cout<<"E) Intersecção:";
    int *j = new int(0);
    for(int *x = new int(0); *x< *aux; (*x)++)
    {
        *flag=false;
        for(int *j = new int(0); *j< *x; (*j)++)
        {
            if((*A)[*x]==(*A)[*j])
            {
                *flag=true;
                break;
            }
        }
        if(*flag==false)
        {
            cout <<(*A)[*x]<< ", ";

        }

    }
}
void diferenca(int **X, int **Y, int **D)
{
    int *i = new int(0);
    int *aux = new int(0);
    for(int *i = new int(0); *i< 10; (*i)++)
    {
        int *cont = new int(0);
        for(int *x = new int(0); *x< 10; (*x)++)
        {
            if((*X)[*i]!=(*Y)[*x])
            {
                (*cont)++;
                if(*cont==10)
                {
                    *(*D)=(*X)[*i];
                    (*D)++;
                    (*aux)++;
                }

            }
        }
    }
    (*D)-=*aux;
    bool *flag;
    cout<<endl;
    cout<<"B)Diferença:";
    int *j = new int(0);
    for(int *i = new int(0); *i< *aux; (*i)++)
    {
        *flag=false;
        for(int *j = new int(0); *j< *i; (*j)++)
        {
            if((*D)[*i]==(*D)[*j])
            {
                *flag=true;
                break;
            }
        }
        if(*flag==false)
        {
            cout<<(*D)[*i]<<", ";
        }
    }

}
main()
{
    setlocale(LC_ALL,"Portuguese");

    int *menu = new int(0);
    int *pX = new int[10];
    int *pY = new int[10];
    int *uniao= new int[20];
    int *dif= new int[20];
    int *igual= new int[20];
    srand(time(NULL));
    do
    {
        system("cls");
        cout << "----------Vetores X e Y----------" << endl;
        cout << "-- 1 A união de X com Y        --" << endl;
        cout << "-- 2 A diferença entre X e Y   --" << endl;
        cout << "-- 3 A soma entre X e Y        --" << endl;
        cout << "-- 4 O produto entre X e Y     --" << endl;
        cout << "-- 5 A intersecção entre X e Y --" << endl;
        cout << "-- 0 - Sair                    --" << endl;
        cout << "---------------------------------" << endl;
        cout << "Sua escolha: ";
        cin >> *menu;
        fflush(stdin);

        switch(*menu)
        {
        case 1 :
            system("cls");
            gerarXY(&pX,&pY);
            cout<<endl;
            uniaoXY(&pX,&pY,&uniao);
            cout<<endl;
            system("pause");
            break;
        case 2:
            system("cls");
            gerarXY(&pX,&pY);
            cout<<endl;
            diferenca(&pX,&pY,&dif);
            cout<<endl;
            system("pause");
            break;
        case 3:
            system("cls");
            gerarXY(&pX,&pY);
            cout<<endl;
            soma(&pX,&pY);
            cout<<endl;
            system("pause");
            break;
        case 4:
            system("cls");
            gerarXY(&pX,&pY);
            cout<<endl;
            produto(&pX,&pY);
            cout<<endl;
            system("pause");
            break;
        case 5:
            system("cls");
            gerarXY(&pX,&pY);
            cout<<endl;
            interseccao(&pX,&pY,&igual);
            cout<<endl;
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
