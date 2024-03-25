#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<fstream>
#include<cstring>

using namespace std;

main()
{
    setlocale(LC_ALL,"Portuguese");
    char texto [25];
    int cont=0;
    int vet[25], mat[5][5];
    int a=0, dp[5], ds[5];

    ifstream ler("numeros.txt", ios::in);
    if(ler.is_open())
    {
        cout << "\nLeitura realizada com sucesso" << endl;
        while(ler.getline(texto,25,';'))
        {
            if(cont<25)
            {
                vet[cont]=atoi(texto);
            }
            cont++;
        }
    }
    else
    {
        cout << "Erro ao abrir o arquivo";
    }
    ler.close();

    cout<<"Matriz: "<<endl;
    for(int j=0; j<5; j++)
    {
        for(int k=0; k<5; k++)
        {
            if(a<25)
            {
                mat[j][k]=vet[a];
            }
            a++;
        }
    }
    int i=0, o=0;
    int soma_acima=0, soma_abaixo=0;
    for(int j=0; j<5; j++)
    {
        for(int k=0; k<5; k++)
        {
            cout<<mat[j][k]<<"\t";
            if(j==k)
            {
                dp[i]=mat[j][k];
                i++;
            }
            if(j+k==4)
            {
                ds[o]=mat[j][k];
                o++;
            }
            if(j<k)
                soma_acima+=mat[j][k];
            if(j>k)
                soma_abaixo+=mat[j][k];
        }
        cout<<"\n";
    }
    cout<<endl;
    cout<<"Diagonal Principal: ";
    for(int j=0; j<5; j++)
    {
        cout<<dp[j]<<", ";
    }
    cout<<endl;
    cout<<"Diagonal secundária: ";
    for(int j=0; j<5; j++)
    {
        cout<<ds[j]<<", ";
    }
     cout<<endl;
    cout<<"Soma dos elementos acima da DP: "<<soma_acima<<endl;
    cout<<"Soma dos elementos abaixo da DP: "<<soma_abaixo<<endl;


}
