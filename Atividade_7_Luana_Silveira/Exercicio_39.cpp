#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<cstring>

using namespace std;

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
    int k,n;

    cout<<"Informe uma sequência de numeros naturais qualquer: ";
    cin>>n;
    cout<<endl;
    do
    {
        cout<<"Digite dígito dessa sequência (0-9): ";
        cin>>k;

    }
    while(k<0 || k>9);

    cout<<"O número "<< k <<" aparece "<< verifica(n,k) <<" vezes.";

}
