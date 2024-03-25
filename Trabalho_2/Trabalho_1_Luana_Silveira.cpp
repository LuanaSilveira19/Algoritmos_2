#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<ctime>

using namespace std;
int leitura(char cpf[10])
{
    int v;
    cout << cpf;
    cin >> v;
    fflush(stdin);
    return v;
}
void mostra(int vet[9])
{
    int i;
    for(i = 0; i < 9; i++)
    {
        cout << vet[i] << " ";
    }
}
int soma(int v[9])
{
    int mul=0;
    mul=v[0]*10 + v[1]*9+v[2]*8+v[3]*7+v[4]*6+v[5]*5+ v[6]*4+v[7]*3+v[8]*2;
    return mul;
}

int soma2(int v[9],int b)
{
    int res=0;
    res=v[0]*11 + v[1]*10+v[2]*9+v[3]*8+v[4]*7+v[5]*6+ v[6]*5+v[7]*4+v[8]*3+b*2;
    return res;
}
int verifica1(int a)
{
    if(a%11>2)
    {
        return 11-(a%11);
    }
    if(a%11<2)
    {
        return 0;
    }
    else
    {
        return verifica1(a)%11;
    }
}

int verifica2(int c)
{
    if(c%11==6)
    {
        return 11-(c%11);
    }
    if(c%11<2)
    {
        return 0;
    }
    else
    {
        return verifica1(c)%11;
    }
}

main()
{
    setlocale(LC_ALL,"Portuguese");
    int v[9],b,a,c;

    v[0] = leitura("Informe o 1 número do seu CPF: ");
    v[1] = leitura("Informe o 2 número do seu CPF: ");
    v[2] = leitura("Informe o 3 número do seu CPF: ");
    v[3] = leitura("Informe o 4 número do seu CPF: ");
    v[4] = leitura("Informe o 5 número do seu CPF: ");
    v[5] = leitura("Informe o 6 número do seu CPF: ");
    v[6] = leitura("Informe o 7 número do seu CPF: ");
    v[7] = leitura("Informe o 8 número do seu CPF: ");
    v[8] = leitura("Informe o 9 número do seu CPF: ");
    cout<<"Vetor: ";
    mostra(v);

    cout<<endl;
    cout<<endl;

    cout<<"Primeira soma:";
    cout<<soma(v);

    cout<<endl;
    cout<<endl;
    a=soma(v);
    cout<<"Primeiro digito verificador: ";
    cout<<verifica1(a);
    b=verifica1(a);
    cout<<endl;
    cout<<endl;

    cout<<"Segunda soma:";
    cout<<soma2(v,b);
    cout<<endl;
    cout<<endl;
    c=soma2(v,b);
    cout<<"Segundo digito verificador: ";
    cout<<verifica2(c);
    cout<<endl;
    cout<<endl;
    cout<<"O CPF completo é: ";
    mostra(v);
    cout<<verifica1(a);
    cout<<verifica2(c);

}

