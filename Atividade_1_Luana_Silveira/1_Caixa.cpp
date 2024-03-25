#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cmath>
using namespace std;

main()
{
    setlocale (LC_ALL, "portuguese") ;
    int duzentos = 0, cem = 0, cinquenta = 0, vinte = 0, dez = 0, cinco = 0, dois = 0, b;
    float valor;

    cout<< "Informe o valor que você quer sacar: ";
    cin>> valor;

    cout<<endl;
    cout<<"Valor do saque R$: "<<valor<<endl;
do{

        b=valor;
    if(valor< 2 || valor==3 || valor!=b)
    {
        cout<<"Insira valores inteiros e positivos maiores que 2 e diferentes de 3."<<endl;
    }


    else
    {
         while (b % 5 != 0)
            {
                b -= 2;
                dois++;
            }
            if (b % 5 == 0)
            {
                while (b >= 200)
                {
                    b -= 200;
                    duzentos++;
                }
                while (b >= 100)
                {
                    b -= 100;
                    cem++;
                }
                while (b >= 50)
                {
                    b -= 50;
                    cinquenta++;
                }
                while (b >= 20)
                {
                    b -= 20;
                    vinte++;
                }
                while (b >= 10)
                {
                    b -= 10;
                    dez++;
                }
                while (b >= 5)
                {
                    b -= 5;
                    cinco++;
                }


        cout<<"Retire seu dinheiro: "<<endl;


         if(duzentos!=0)
        {
            cout<< duzentos<<" notas de 200 "<< endl;
        }
        if(cem!=0)
        {
            cout<< cem<<" notas de 100 "<< endl;
        }
        if(cinquenta!=0)
        {
            cout<< cinquenta<<" notas de 50 "<< endl;
        }
        if(vinte!=0)
        {
            cout<< vinte<<" notas de 20 "<< endl;
        }
        if(dez!=0)
        {
            cout<< dez<<" notas de 10 "<< endl;
        }
        if(cinco!=0)
        {
            cout<< cinco<<" notas de 5 "<< endl;
        }
        if(dois!=0)
        {
            cout<< dois<<" notas de 2"<< endl;
        }


    }
     break;
}

}while (valor< 2 || valor==3 || valor!=b);
}
