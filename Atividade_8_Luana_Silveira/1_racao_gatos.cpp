#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<cstring>

using namespace std;


float calcula (float *p, float *g1)
{
    float comida;
    *p * 1000;
    comida= 5* ((*g1*2)/1000);

    return *p - comida;
}
main()
{
    setlocale(LC_ALL,"Portuguese");

    float peso, gatos;

    cout<<"Informe o peso (kg) do saco de ra��o: ";
    cin>>peso;
    fflush(stdin);
    cout<<"Informe a quantidade (em gramas) de ra��o dada para os gatos: ";
    cin>>gatos;
    fflush(stdin);

    cout << fixed;
    cout.precision(1);
    cout<<"Ap�s 5 dias restam " <<calcula(&peso,&gatos)<<" kg de ra��o no saco."<<endl;


    }
