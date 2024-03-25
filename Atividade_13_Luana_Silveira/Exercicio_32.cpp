#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cmath>
#include <fstream>

using namespace std;

main()
{
    setlocale(LC_ALL,"Portuguese");

    char texto[10];
    int maior=0, menor=10000, cont=0;
    float soma=0;
    int par=0, impar=0;
    ifstream ler("teste_32.txt", ios::in);


    if(ler.is_open())
    {
        cout << "Leitura realizada com sucesso" << endl;

        while(ler.getline(texto,10,'\n'))
        {
           // cout << texto << endl;
            cont++;
            if(atoi(texto)> maior)
            {
                maior=atoi(texto);
            }
            if(atoi(texto)< menor)
            {
                menor=atoi(texto);
            }
            if(atoi(texto)%2==0)
            {
               par++;
            }
            else{
                impar++;
            }

            soma += atoi(texto);
        }
    cout << fixed;
    cout.precision(2);
    cout<<"Maior elemento: "<<maior<<endl;
    cout<<"Menor elemento: "<<menor<<endl;
    cout<<"Média aritmética: "<<soma/cont<<endl;
    cout<<"Quantidade de pares: "<<par<<endl;
    cout<<"Quantidade de impares: "<<impar<<endl;
    }
    else
    {
        cout << "Erro ao abrir o arquivo";
    }
    ler.close();


}
