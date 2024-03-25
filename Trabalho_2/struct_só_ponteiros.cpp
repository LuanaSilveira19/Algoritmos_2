#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<cstring>

using namespace std;

struct empresa
{
    string *nome = new string[2];
    float *salario= new float[2];
    int *tempo = new int[2];
};
void leitura(empresa *x)
{
    int *i = new int(0);
    while(*i<2)
    {
        cout<<"----------Funcionário "<<*i+1<<"--------------"<<endl;
        cout<<"Nome: ";
        getline(cin,x->nome[*i]);
        fflush(stdin);
        cout<<"Salário: R$";
        cin>> x->salario[*i];
        fflush(stdin);
        cout<<"Tempo de serviço (em anos): ";
        cin>>x->tempo[*i];
        fflush(stdin);
        (*i)++;

    }
}
void mostra(empresa *x)
{
    int *i = new int(0);
    while(*i<2)
    {
        cout<<"----------Funcionário "<<*i+1<<"--------------"<<endl;
        cout<<"Nome: "<<x->nome[*i]<<endl;
        fflush(stdin);
        cout<<"Salário: R$"<<x->salario[*i]<<endl;
        fflush(stdin);
        cout<<"Tempo de serviço (em anos): "<<x->tempo[*i]<<endl;
        fflush(stdin);
        (*i)++;
    }
}
void sem_aumento(empresa *x)
{
    int *i = new int(0);
    cout<<"---------Funcionários que NÃO terão aumento---------"<<endl;

    for(*i; *i<2; (*i)++)
    {
        if(x->tempo[*i]<6 && x->salario[*i]>1799)
        {
            cout<<"Nome: "<<x->nome[*i];
            fflush(stdin);
            cout<<endl;
            cout<<"--------------------------------------"<<endl;
        }
    }
}
void com_aumento(empresa *x)
{
     int *i = new int(0);
    cout<<"---------Funcionários que TERÃO aumento---------"<<endl;

    for(*i; *i<2; (*i)++)
    {
        if(x->tempo[*i]>5 ||  x->salario[*i]<1800)
        {
            if((x->tempo[*i]>5 &&  x->salario[*i]<1800))
            {

                cout<<endl;
                x->salario[*i]+= x->salario[*i] * 0.15;
                cout<<"Nome: "<<x->nome[*i];
                fflush(stdin);
                cout<<endl;
                cout<<"Novo salário: R$"<< x->salario[*i]<<endl;
                cout<<"--------------------------------------"<<endl;
            }
            if(x->tempo[*i]>5)
            {
                cout<<endl;
                 x->salario[*i]+= x->salario[*i] * 0.10;
                cout<<"Nome: "<<x->nome[*i];
                fflush(stdin);
                cout<<endl;
                cout<<"Novo salário: R$"<< x->salario[*i]<<endl;
                cout<<"--------------------------------------"<<endl;
            }
            if( x->salario[*i]<1800)
            {
                cout<<endl;
                 x->salario[*i]+= x->salario[*i] * 0.05;
                cout<<"Nome: "<<x->nome[*i];
                fflush(stdin);
                cout<<endl;
                cout<<"Novo salário: R$"<< x->salario[*i]<<endl;
                cout<<"--------------------------------------"<<endl;
            }

    }

}
}
main()
{
    setlocale(LC_ALL,"Portuguese");
    int *menu = new int(0);
    int *cont = new int(0);

    empresa cadastro;
    do
    {
        system("cls");
        cout << "-----------------EMPRESA---------------" << endl;
        cout << "-- 1 Registrar funcionário           --" << endl;
        cout << "-- 2 Mostrar dados                   --" << endl;//se for atualizar tirar essa
        cout << "-- 3 Mostrar quem não terá aumento   --" << endl;
        cout << "-- 4 Mostrar quem terá aumento       --" << endl;
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
            leitura(&cadastro);
            cout<<endl;
            system("pause");
            break;
        case 2 :
            system("cls");
            if(*cont==0)
            {
                cout<<"Primeiro registre os funcionários: "<<endl;
            }
            else
            {
                mostra(&cadastro);
                cout<<endl;
                system("pause");
                break;
            }

        case 3 :
            system("cls");
            if(*cont==0)
            {
                cout<<"Primeiro registre os funcionários: "<<endl;
            }
            else
            {
                sem_aumento(&cadastro);
                cout<<endl;
                system("pause");
                break;
            }
        case 4 :
            system("cls");
            if(*cont==0)
            {
                cout<<"Primeiro registre os funcionários: "<<endl;
            }
            else
            {
                com_aumento(&cadastro);
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
