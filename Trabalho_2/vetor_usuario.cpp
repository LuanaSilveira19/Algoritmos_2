#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<cstring>

using namespace std;

main()
{
      setlocale(LC_ALL,"Portuguese");
    int *t = new int(0);
    cout<<"Informe o tamano do vetor: ";
    cin>>*t;

    int *vet = new int[*t];

    for(int *i = new int(0); *i<*t; (*i)++)
    {
        cout<<"Informe o valor da "<<*i+1<<"º posição do vetor: ";
        cin>>vet[*i];
    }

    cout<<"Vetor gerado:";
     for(int *i = new int(0); *i<*t; (*i)++)
    {
        cout<<vet[*i]<<", ";
    }
}
