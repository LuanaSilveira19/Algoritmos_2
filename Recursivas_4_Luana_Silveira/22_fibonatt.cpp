#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<cstring>

using namespace std;
//teste de mesa
void fibo(int valor, int ultValor, int  cont, int fim)
{

    if(cont>fim)
    {
        return;
    }
    else{
        cout<<valor<<", ";
        fibo (valor+ ultValor, valor, cont+1, fim);
    }
}

main()
{
    fibo(0,1,1,20);
}





