#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<cstring>

using namespace std;


char inverter(char nome[]);
main()
{
    setlocale(LC_ALL,"Portuguese");
    char nome[50];
    cout << "Informe o nome: ";
    gets(nome);
    fflush(stdin);

    cout<<"String invertida: ";
    inverter(nome);

}

char inverter(char nome[])
{
        for(int i=strlen(nome); i>=0; i--)
        {
            cout<<nome[i];
        }
}
