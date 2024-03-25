#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<fstream>
#include<cstring>


using namespace std;

main()
{
    setlocale(LC_ALL,"Portuguese");
    char texto[50];
    float vet[50];
    int cont=0, tam=0;
    float soma=0, maior=0, menor=10000000000000;

    ifstream ler("float.txt", ios::in);
    if(ler.is_open())
    {
        cout << "\nLeitura realizada com sucesso" << endl;
        while(ler.getline(texto,50,';'))
        {
            if(cont<50)
            {
                //cout<<texto;
                soma+=atof(texto);
                if(maior<atof(texto))
                    maior=atof(texto);
                if(menor>atof(texto))
                    menor=atof(texto);

                vet[tam]=atof(texto);
                tam++;
            }
            cont++;
        }
        cout<<"Soma dos valores: "<<soma<<endl;
        cout<<"Maior valor: "<<maior<<endl;
        cout<<"Menor valor: "<<menor<<endl;
        cout<<"Média dos valores: "<<soma/tam<<endl;
    }
    else
    {
        cout << "Erro ao abrir o arquivo";
    }
    ler.close();
    int quebra=0;
    float aux=0;

    for(int j=0; j<tam-1; j++)
    {
        for(int k=j+1; k<tam; k++)
        {
            if(vet[j]> vet[k])
            {
                aux= vet[j];
                vet[j] =vet[k];
                vet[k]= aux;
            }
        }
    }
    cout<<"Valores em ordem crescente: "<<endl;
    for(int j=0; j<tam; j++)
    {
        cout<< vet[j]<<", ";
        quebra++;
        if(quebra==10)
        {
            cout<<endl;
            quebra=0;
        }
    }
}
