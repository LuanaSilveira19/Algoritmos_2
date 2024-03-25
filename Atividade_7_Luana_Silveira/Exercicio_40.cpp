#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<cstring>

using namespace std;


int ler()
{
    int n;
    do{
    cout<<"Informe um número inteiro qualquer: ";
    cin>>n;
    if(n<=10)
    {
        cout<<"Inválido! Digite um número maior que 10. ";
    }
    }while(n<=10);
    return n;
}
int lerV() {
    int v;

    do {
        cout<<"Informe o número verificador(0-9): ";
        cin >> v;

        if (v < 1 || v> 9) {
            cout << "Numero invalido! Digite novamente." << endl;
        }

    } while (v < 1 || v> 9);

    return v;
}
int verifica(int n, int k)
{
    if(n==0)
    {
        return 0;
    }
    int primeiro= n%10;
    if(primeiro==k)
    {
        return 1+ verifica(n/10,k);
    }
    else{
         return verifica(n/10,k);
    }

}
main()
{
    setlocale(LC_ALL,"Portuguese");
    int n=ler();
    int k=lerV();

    cout<<"Resposta: "<<verifica(n,k);

}
