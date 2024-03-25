#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<cstring>

using namespace std;

void leitura(char *vA, char *vB)
{
    for(int i=0; i<10; i++)
    {
        cout<< "Informe uma letra para a " << i + 1 << "º posição de A: ";
        cin>>vA[i];
    }
    cout<<endl;
    for(int i=0; i<10; i++)
    {
        cout<< "Informe uma letra para a " << i + 1 << "º posição de B: ";
        cin>>vB[i];
    }
}
void mostra(char *vA, char *vB)
{
    cout<<"Elementos de A:";
    for(int i=0; i<10; i++)
    {
        cout << *(vA+ i);
    }
    cout<<endl;
    cout<<"Elementos de B:";
    for(int i=0; i<10; i++)
    {
        cout << *(vB+ i);
    }
}

void trocar(char *vA, char *vB)
{
    char aux;
    for(int i=0; i<10; i++)
    {
        aux=*(vA + i);
        *(vA + i)=*(vB +9-i);
        *(vB +9-i)=aux;
    }
    cout<<"Elementos de A:";
    for(int i=0; i<10; i++)
    {
        cout << *(vA+ i);
    }
    cout<<endl;
    cout<<"Elementos de B:";
    for(int i=0; i<10; i++)
    {
        cout << *(vB+ i);
    }
}

main()
{
    setlocale(LC_ALL,"Portuguese");
    char A[10], B[10];
    leitura(A,B);
    cout<<endl;
    cout<<endl;
    cout<<"Ordem original:"<<endl;
    mostra(A,B);
    cout<<endl;
    cout<<endl;
    cout<<"Ordem depois da troca:"<<endl;
    trocar(A,B);
    cout<<endl;




}
