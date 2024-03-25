#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<cstring>

using namespace std;

int leitura(char texto[50]);
void primos(int p);

main()
{
    setlocale(LC_ALL,"portuguese");
    int i, n, div=0, resto, cont=0;
    int a = leitura("Informe um número inteiro: ");

    cout << "Número: " << a << endl;

    cout<<"Números primos: ";

    primos(a);

}
int leitura(char texto[50])
{
    int v;
    cout << texto;
    cin >> v;
    fflush(stdin);
    return v;
}

void primos(int p)
{
    int aux, counter=0, primos=0, r_primos;
    while(primos<=4)
    {
        counter++;
        aux=0;
        r_primos=p+counter;
        for(int i=1; i<=r_primos; i++)
        {
            if(r_primos%i==0)
            {
                aux++;
            }
        }if(aux==2)
        {
            primos++;
            cout<<r_primos<<", ";
        }

    }
}


