#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<cstring>

using namespace std;

main()
{
    setlocale(LC_ALL,"Portuguese");
    int *tam = new int;
    int *pvet = new int[*tam];
    int *i = new int(0);
    int *x = new int(0);
    int *maior = new int(0);
    int *cont_par = new int(0);
    int *cont_impar = new int(0);
    float *soma= new float(0);
    int *num = new int;
    int *mostra = new int(0);
    cout << "Informe quantos n�meros deseja digitar: ";
    cin >> *tam;
    fflush(stdin);

    while(*i < *tam)
    {
        cout<<"Digite o "<<*i+1<<"� n�mero: ";
        cin>>*num;
        fflush(stdin);
        *pvet =*num;
        *soma+=*num;
         pvet++;
        (*i)++;
    }
    pvet -= *i;
    *maior=*pvet;

    cout<<endl;

    for(*x ; *x < *tam; (*x)++)
    {
        if(*pvet % 2==0)
        {
           (*cont_par)++;
        }
        else
        {
             (*cont_impar)++;
        }
        if(*pvet> *maior)
        {
            *maior=*pvet;
            *mostra=*x;
        }
        pvet++;
    }
    cout<<endl;
    cout << fixed;
    cout.precision(2);
    cout<<"Total de pares: "<<*cont_par<<endl;
    cout<<"Maior n�mero digitado: "<<*maior<<", ocorreu na "<<*mostra+1<<"� posi��o."<<endl;
    cout<<"Percentual de n�meros impares digiados: "<<((*cont_impar * 100.0)/ *tam)<<"%"<<endl;
    cout<<"M�dia dos valores: "<<(*soma/ *tam)<<endl;




}
