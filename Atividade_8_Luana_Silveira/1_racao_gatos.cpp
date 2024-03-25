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

    cout<<"Informe o peso (kg) do saco de ração: ";
    cin>>peso;
    fflush(stdin);
    cout<<"Informe a quantidade (em gramas) de ração dada para os gatos: ";
    cin>>gatos;
    fflush(stdin);

    cout << fixed;
    cout.precision(1);
    cout<<"Após 5 dias restam " <<calcula(&peso,&gatos)<<" kg de ração no saco."<<endl;


    }
