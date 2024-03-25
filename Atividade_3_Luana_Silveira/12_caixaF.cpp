#include<iostream>
#include<cstdio>
#include<cstdlib>

using namespace std;
int op_notas(int saque, int notas);
bool valida(int saque);



int leitura(int v)
{
    cout << "Informe o valor do saque: R$";
    cin >> v;
    fflush(stdin);
    return v;

}
bool valida(int saque)
{

        if(saque< 2 || saque == 3)
        {
            cout << "Valor inválido para o saque!"<<endl;
            return false;
        }

    return true;
}

main()
{
    int saque, valor;

    int notas[7]={200,100,50,20,10,5,2};

    setlocale(LC_ALL,"portuguese");


    do
    {
       saque=leitura(saque);
       if(valida(saque))
       {
           break;
       }

    }
    while (saque < 2 || saque == 3);

cout << "Saque processado com sucesso, retire seu dinheiro: " << endl;

   for(int i=0; i<7; i++)
   {
       saque=op_notas(saque, notas[i]);

   }

}

int op_notas(int saque, int notas)
{
int saquemod=saque % notas;
if(saquemod!=3 && saquemod!=saque && saquemod!=1)
{
    cout<<"Notas de "<< notas <<" = "<< saque/notas<<endl;
    return saque%notas;
}
else if(saque/notas >=2)
{
cout<<"Notas de "<< notas <<" = "<< saque/notas-1<<endl;
    return (saque -(notas* (saque/notas-1)));
}
else
    {
      return saque;
    }


}

