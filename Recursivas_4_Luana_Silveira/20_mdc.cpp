#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<ctime>
using namespace std;


int mdc(int a, int b);
main()
{
    setlocale(LC_ALL,"Portuguese");


    int x, y;
    cout<< "Cálculo do MDC "<<endl;

    cout<< "Informe o primeiro número: ";
    cin>> x;

    cout<< "Informe o segundo número: ";
    cin>> y;

    cout<< "O MDC desses números é: ";
    cout<<mdc(x,y);
    cout<<endl;

}

int mdc(int a, int b)
{
    if(a%b==0)
    {
        return b;
    }
    else
    {
        return mdc(b, a % b );
    }
}
