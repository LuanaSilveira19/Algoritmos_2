#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<cstring>

using namespace std;

struct dados
{
int numero;
string nome;
};
void leitura(dados *x)
{
cout << "Informe o numero: ";
cin >> (*x).numero;
fflush(stdin);
cout << "Informe seu nome: ";
getline(cin,(*x).nome);
fflush(stdin);
}
main()
{
     setlocale(LC_ALL,"Portuguese");
dados cadastro;
leitura(&cadastro);
cout << "Número informado: " << cadastro.numero<<endl;
cout << "Nome: " << cadastro.nome;

}
