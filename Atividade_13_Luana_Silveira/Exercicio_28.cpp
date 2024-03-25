#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<fstream>
#include<cstring>
#include<cmath>
using namespace std;

main()
{
    setlocale(LC_ALL,"Portuguese");
    string nome;
    cout <<"Informe o nome do arquivo: ";
    getline(cin, nome);


    int esp=0, vog=0, cons=0, cont=0, aux;
    char c;
    ifstream ler(nome, ios::in);
    if(ler.is_open())
    {
        cout << "\nLeitura realizada com sucesso" << endl;
        while(ler.get(c))
        {
            cout << c;
            if(isspace(c))
                esp++;
            if((c)=='a' || (c)=='e' || (c)=='i' || (c)=='o'|| (c)=='u')
                vog++;
            if((c)=='A' ||(c)=='E' || (c)=='I' || (c)=='O'|| (c)=='U')
                vog++;
            if(isalpha(c))
                cons++;

            cont++;
        }
        aux=cons-vog;
        cout<<endl;
        cout<<"Total de caracteres:"<<cont-esp<<endl;
        cout << "Total de vogais: "<<vog<<endl;
        cout << "Total de consoantes: "<< fabs(aux)<<endl;
    }
    else
    {
        cout << "Erro ao abrir o arquivo";
    }
    ler.close();


}
