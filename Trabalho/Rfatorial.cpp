#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<cstring>

using namespace std;
int fatorial(int n);
main()
{
        setlocale(LC_ALL,"Portuguese");
int a;
do{
 cout<< "Informe um número para fatorar: ";
 cin>>a;
 if(a<0)
 {
      cout<< "Não é permitido número negativo.";
 }
}while(a<0);

   cout<< "O fatorial de "<< a <<" é = ";

    cout<<fatorial(a);

}

int fatorial(int n)
{
    if(n==0 || n==1)
    {
        return 1;
    }
    else
    {
        return n*fatorial(n-1);
    }
}
