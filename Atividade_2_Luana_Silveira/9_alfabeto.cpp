#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<cstring>

using namespace std;

main()
{
    setlocale(LC_ALL,"portuguese");
    string texto, alfa= "abcdefghijlmnopqrstuvxz", limpo="", num="";
    int aux=0;
    cout << "Informe um texto qualquer: ";
    getline(cin, texto);
    fflush(stdin);

    if(texto.size()<1 || texto.size()> 200)
    {
        cout<<"Texto inválido."<<endl;
        return 1;
    }


    for(int i = 0; i < texto.size(); i++)
    {
        if (isalpha(texto[i]) && texto[i]!='k' && texto[i]!='w' && texto[i]!='y' && islower(texto[i]))
        {
            limpo+=texto[i];
        }

    }
    bool verifica=false;

    for(int i = 0; i < limpo.size(); i++)
    {
        for(int j = 0; j < alfa.size(); j++)
        {
            if(alfa[j]== limpo[i])
            {
                for(int k=0; k< num.size(); k++)
                {
                    if(limpo[i]== num[k])
                    {
                        verifica=true;
                    }
                }
                if(verifica)
                {
                    verifica=false;
                    break;
                }
                aux++; num+=alfa[j];
                break;
            }
        }

    }


    if(aux==alfa.size())
    {
        cout<<"S"<<endl;
    }
    else{
           cout<<"N"<<endl;
    }



    }

