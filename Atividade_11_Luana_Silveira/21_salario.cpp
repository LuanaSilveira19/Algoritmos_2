#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<cstring>

using namespace std;

void informe(string **n, float **s, int **t)
{
    int *q = new int(5);
    int *i = new int(0);

    while(*i<*q)
    {
        cout<<"----------Funcion�rio "<<*i+1<<"--------------"<<endl;
        cout<<"Nome: ";
        getline(cin, (*n)[*i]);
        fflush(stdin);
        cout<<"Sal�rio: R$";
        cin>>(*s)[*i];
        fflush(stdin);
        cout<<"Tempo de servi�o (em anos): ";
        cin>>(*t)[*i];
        fflush(stdin);
        (*i)++;
    }
}
void  primeiro_relatorio(string **n, float **s, int **t)
{
    int *q = new int(5);
    int *i = new int(0);
    cout<<"---------Funcion�rios que N�O ter�o aumento---------"<<endl;

    for(*i; *i<*q; (*i)++)
    {
        if((*t)[*i]<6 && (*s)[*i]>1799)
        {
            cout<<"Nome: "<<(*n)[*i];
            fflush(stdin);
            cout<<endl;
            cout<<"--------------------------------------"<<endl;
        }
    }

}
void  segundo_relatorio(string **n, float **s, int **t)
{
    int *q = new int(5);
    int *i = new int(0);
    cout<<"---------Funcion�rios que TER�O aumento---------"<<endl;

    for(*i; *i<*q; (*i)++)
    {
        if((*t)[*i]>5 || (*s)[*i]<1800)
        {
            if(((*t)[*i]>5 && (*s)[*i]<1800))
            {

                cout<<endl;
                (*s)[*i]+=(*s)[*i] * 0.15;
                cout<<"Nome: "<<(*n)[*i];
                fflush(stdin);
                cout<<endl;
                cout<<"Novo sal�rio: R$"<<(*s)[*i]<<endl;
                cout<<"--------------------------------------"<<endl;
            }
            if((*t)[*i]>5)
            {
                cout<<endl;
                (*s)[*i]+=(*s)[*i] * 0.10;
                cout<<"Nome: "<<(*n)[*i];
                fflush(stdin);
                cout<<endl;
                cout<<"Novo sal�rio: R$"<<(*s)[*i]<<endl;
                cout<<"--------------------------------------"<<endl;
            }
            if((*s)[*i]<1800)
            {
                cout<<endl;
                (*s)[*i]+=(*s)[*i] * 0.05;
                cout<<"Nome: "<<(*n)[*i];
                fflush(stdin);
                cout<<endl;
                cout<<"Novo sal�rio: R$"<<(*s)[*i]<<endl;
                cout<<"--------------------------------------"<<endl;
            }

    }

}
}
main()
{
    setlocale(LC_ALL,"Portuguese");
    int *q = new int(5);
    string *nome = new string[*q];
    float *salario = new float[*q];
    int *tempo = new int[*q];
    int *menu = new int(0);
    int *cont = new int(0);

    do
    {
        system("cls");
        cout << "-----------------EMPRESA---------------" << endl;
        cout << "-- 1 Registrar funcion�rio           --" << endl;
        cout << "-- 2 Mostrar quem n�o ter� aumento   --" << endl;
        cout << "-- 3 Mostrar quem ter� aumento       --" << endl;
        cout << "-- 0 Sair                            --" << endl;
        cout << "---------------------------------------" << endl;
        cout << "Sua escolha: ";
        cin >> *menu;
        fflush(stdin);

        switch(*menu)
        {
        case 1 :
            system("cls");
            (*cont)++;
            informe(&nome,&salario,&tempo);
            cout<<endl;
            system("pause");
            break;
        case 2 :
            system("cls");
            if(*cont==0)
            {
                cout<<"Primeiro registre os funcion�rios: "<<endl;
            }
            else
            {
                primeiro_relatorio(&nome,&salario,&tempo);
                cout<<endl;
                system("pause");
                break;
            }

        case 3 :
            system("cls");
            if(*cont==0)
            {
                cout<<"Primeiro registre os funcion�rios: "<<endl;
            }
            else
            {
                segundo_relatorio(&nome,&salario,&tempo);
                cout<<endl;
                system("pause");
                break;
            }
        case 0 :
            system("cls");
            cout << "\nPrograma finalizado.";
            getchar();
            break;

        }

    }
    while(*menu != 0);


}
