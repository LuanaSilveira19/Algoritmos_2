#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<ctime>

using namespace std;


int potencia(int a, int c);
main()
{
    setlocale(LC_ALL,"Portuguese");


    int b, e;
    do
    {
        cout<< "Potenciação"<<endl;

        cout<< "Informe o valor da base: ";
        cin>> b;

        cout<< "Informe o valor do expoente: ";
        cin>> e;
        if(b<0 || e<0)
        {
            cout<<"Informe valores positivos para a base e o expoente. "<<endl;
        }
    }
    while(b<0 || e<0);
    cout<< "O resultado é: ";
    cout<<potencia(b,e);

}

int potencia(int a, int c)
{
    if(c==0)
    {
        return 1;
    }
    else
    {
        return a * potencia(a, c-1);
    }
}
