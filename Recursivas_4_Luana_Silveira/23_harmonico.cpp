#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<ctime>
#include<cmath>
using namespace std;

float H(int a);

main()
{
    setlocale(LC_ALL,"Portuguese");


    int n;

    do{
        cout<< "N�mero harm�nico"<<endl;

        cout<< "Informe o n�mero: ";
        cin>> n;

        if(n<1)
        {
               cout<< "O n�mero precisa ser maior ou igual a 1."<<endl;
        }

    }while(n<1);

     cout<< "Resultado: ";
     cout<<H(n);
}

float H(int a)
{
    if(a==1)
    {
        return ((float)1);
    }
    else{
        return ((float)1/a + H(a-1));
    }
}
