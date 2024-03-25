#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<cstring>

using namespace std;

main()
{
    setlocale(LC_ALL,"portuguese");
    string texto;
    int esp=0, num=0, vog=0, mi=0, ma=0, cons=0;

    cout << "Informe um texto qualquer: ";
    getline(cin, texto);
    fflush(stdin);



    for(int i = 0; i < texto.size(); i++)
    {
        if(isspace(texto[i]))
            esp++;
        if(isdigit(texto[i]))
            num++;
        if(texto[i]=='a' || texto[i]=='e' || texto[i]=='i' || texto[i]=='o'|| texto[i]=='u')
            vog++;
        if(texto[i]=='A' || texto[i]=='E' || texto[i]=='I' || texto[i]=='O'|| texto[i]=='U')
            vog++;
        if(islower(texto[i]))
            mi++;
        if(isupper(texto[i]))
            ma++;
        if(isalpha(texto[i]))
            cons++;
    }

    cout << "Total de caracteres: "<< texto.size()- esp<<endl;
    cout << "Total de caracteres em minúsculo: "<< mi<<endl;
    cout << "Total de caracteres em maiúsculo: "<< ma<<endl;
    cout << "Total de vogais: "<<vog<<endl;
    cout << "Total de consoantes: "<< cons-vog<<endl;
    cout << "Total de números: "<<num <<endl;
    cout << "Total de espaços em branco: "<<esp<<endl;



}
