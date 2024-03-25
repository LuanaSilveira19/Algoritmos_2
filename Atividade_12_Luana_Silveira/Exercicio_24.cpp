#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<ctime>
#include<cstring>

using namespace std;
void maior(int ***v2, int ***n2);
void mostra(int **v, int **n)
{
    cout<<"Vetor: ";
    for(int *i= new int(0); *i < *(*n); (*i)++)
        cout << (*v)[*i] << ", ";
    cout<<endl;
    maior(&v,&n);
}
void maior(int ***v2, int ***n2)
{
    int *cont= new int(0);
    int *maior= new int((*(*(*v2))));

    for(int *i= new int(0); *i<*(*(*n2)); (*i)++)
    {
        if((*(*v2))[*i] > *maior)
        {
            *maior= (*(*v2))[*i];
        }
    }
    for(int *i= new int(0); *i<*(*(*n2)); (*i)++)
    {
        if((*(*v2))[*i]== *maior)
            (*cont)++;

    }
    cout<<"O maior elemento é o "<< *maior <<" e ocorreu "<<*cont<<" vezes."<<endl;
}

main()
{
    setlocale(LC_ALL,"Portuguese");

    int *n = new int;
    int *i= new int(0);
    cout<<"Informe o tamanho do vetor: ";
    cin>>*n;

    int *vet = new int[*n];

    srand(time(NULL));
    while(*i<*n)
    {
        *vet=rand()%16;
        vet++;
        (*i)++;
    }
    vet-=*i;
    mostra(&vet, &n);
}
