#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<cstring>

using namespace std;

int num_digitos(int n1)
{
    static int cont=0;

     if(n1!=0)
     {
          cont++;
         num_digitos(n1/10);
     }

    return cont;
}
main()
{
      setlocale(LC_ALL,"Portuguese");

      int n;

      cout<<"Digite um número: ";
      cin>>n;


      cout<<"qtd: ";
      cout<<num_digitos(n);

}
