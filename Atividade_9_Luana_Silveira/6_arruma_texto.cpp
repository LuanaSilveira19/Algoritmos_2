#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<cstring>

using namespace std;


void mostra(char *ptex)
{
    cout<<"Texto resultante: ";
    while(*ptex)
    {
        *ptex= toupper(*ptex);
        if(isalpha(*ptex)&& !isspace(*ptex))
        {
            cout<<*ptex;
            *ptex++;
        }
        else{
            *ptex++;
        }

    }

}

void vog(char *ptex)
{
    int vog=0;
    cout<<"Quantidade de vogais: ";
    while(*ptex)
    {
        if(*ptex=='A' || *ptex=='E' || *ptex=='I' || *ptex=='O'|| *ptex=='U')
            vog++;
        *ptex++;
    }
    cout<<vog;
}

main()
{
    setlocale(LC_ALL, "Portuguese");
    string texto;

    cout << "Informe um texto: ";
    getline(cin, texto);
    fflush(stdin);


    mostra(&texto[0]);
    cout<<endl;
    vog(&texto[0]);

}
