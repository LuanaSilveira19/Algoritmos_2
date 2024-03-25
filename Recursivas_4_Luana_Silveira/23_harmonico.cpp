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
        cout<< "Número harmônico"<<endl;

        cout<< "Informe o número: ";
        cin>> n;

        if(n<1)
        {
               cout<< "O número precisa ser maior ou igual a 1."<<endl;
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
