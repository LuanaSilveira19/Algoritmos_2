#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<cstring>

using namespace std;


int leitura(char texto[50])
{
    int v;
    cout << texto;
    cin >> v;
    fflush(stdin);
    return v;
}

int inverter(int n)
{
    if(n==0)
    {
        return 0;
    }
    else{
        cout<< n%10;
          n=n/10;
        return n;
    }

}
main()
{

    setlocale(LC_ALL,"portuguese");
    int a = leitura("Informe um número inteiro qualquer: ");

    cout << "Número informado: " << a << endl;
    cout << "Resultado exibido: " << inverter(a);

}

