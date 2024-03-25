#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<cstring>

using namespace std;

main()
{
    setlocale(LC_ALL,"Portuguese");
    int *pvet = new int[8];
    int *num = new int(0);
    int *i  = new int(0);
    int *aux  = new int(0);
    int *cont  = new int(0);
    while(*i<8)
    {
        cout<<"Informe um número para o vetor: ";
        cin>>*num;
        (*cont)++;
        pvet[*i]=*num;
       cout<<endl;

         for(int *j = new int(0); *j <*cont-1; (*j)++)
        {
            for(int *k = new int(*j+1); *k <*cont; (*k)++)
            {
                if(pvet[*j]> pvet[*k])
                {
                    *aux= pvet[*j];
                    pvet[*j] =pvet[*k];
                    pvet[*k]= *aux;
                }
            }
        }
        cout<<"Organizado: ";
        for(int *k = new int(0); *k <=*i; (*k)++)
        {
            cout <<pvet[*k]<< "| ";
        }

        cout<<endl;

        (*i)++;
    }
 system("pause");

}
