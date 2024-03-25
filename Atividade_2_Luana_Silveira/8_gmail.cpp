#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<cstring>

using namespace std;

main()
{
    setlocale(LC_ALL,"portuguese");
    string texto, fim="@gmail.com";
    int arroba=0, a=0, b=0;

    cout << "Informe seu endereço de e-mail:";
    cin>>texto;
    fflush(stdin);


    for(int i = 0; i < texto.size(); i++)
    {
        if(texto[i]=='@')
        {
             b=i;
            arroba++;
        }
    }
   if( arroba!=1 ||  texto[0]=='.' || texto[0]=='_' || isdigit(texto[0]) || texto[texto.size() -1 ]=='_' || texto[texto.size() -1 ]=='.')
   {

       cout<<"INVÁLIDO."<<endl;
         return 1;

   }
     for(int i = b; i < texto.size(); i++)
    {
        for(int j=0; j < fim.size(); j++)
    {
        if(texto[i]== fim[j])
            a++;
    }
    }

    if(a !=12)
    {
         cout<<"INVÁLIDO."<<endl;

         return 1;
    }

a=0;
    for(int i = 0; i < texto.size(); i++)
    {

        if(isspace(texto[i]) || isupper(texto[i]))
        {
            cout<<"INVÁLIDO."<<endl;
            return 1;
        }
        else
        {
            a++;

        }

    }

    if(a== texto.size())
    {
         cout<<"VÁLIDO."<<endl;
    }

}
