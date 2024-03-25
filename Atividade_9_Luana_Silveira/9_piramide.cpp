#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<cstring>

using namespace std;
void mostra(int **p)
{
    int j,x;
    for (j=1; j<=**p; j++)
    {
        for(int i=**p-j; i>=1; i--)
        cout<< " ";
        for (x=1; x<=j; x++)
        cout<<x;
        cout<<endl;
    }
}

main()
{
    setlocale(LC_ALL,"Portuguese");

    int n, *pn;
    do
    {
        cout<<"Digite um número para o triângulo:";
        cin>>n;
        if( n<=2 || n>=10)
        {
            cout<<"Número inválido"<<endl;
        }
    }
    while(n<=2 || n>=10);

    pn=&n;
    mostra(&pn);
}
