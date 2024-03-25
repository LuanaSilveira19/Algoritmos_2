#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<fstream>
using namespace std;
main()
{
    char texto[100];
    int i=0, aux=0, vet[100];//tamanho provisório
    ifstream ler("Vetor_crescente.txt");

    int tam=0;
    if(ler.is_open())
    {
        cout<<"Leitura realizada:";

        while(ler.getline(texto,100, ' '))
        {
            tam++;
        }

        vet[tam] = {0};

        ler.close();

        ler.open("Vetor_crescente.txt");

        while (ler.getline(texto, 100, ' '))
        {
            if (i < tam)
            {
                vet[i] = atoi(texto);
                i++;
            }
        }
        ler.close();
        for(int j=0; j<tam-1; j++)
        {
            for(int k=j+1; k<tam; k++)
            {
                if(vet[j]>vet[k])
                {
                    aux=vet[j];
                    vet[j]=vet[k];
                    vet[k]=aux;
                }
            }
        }

    }
    else
    {
        cout << "Falha ao abrir o arquivo.";
    }

    int j=0;

    ofstream escreve("Vetor_crescente.txt", ios::app);
      if(escreve.is_open())
      {
          escreve<<"Vetor:";
          while(j<tam)
          {
              escreve<<vet[j];
              escreve<<", ";
              j++;
          }
          escreve.close();
      }
      else
      {
          cout << "Falha ao abrir o arquivo.";
      }




}
