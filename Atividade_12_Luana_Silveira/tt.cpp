#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<ctime>

using namespace std;
/*Escreva um programa em C++ que leia um n�mero inteiro positivo N e crie dinamicamente uma
matriz de inteiros de tamanho NxN. Preencha a matriz com n�meros pseudoaleatorios menores que o
produto de N * N, imprima a matriz na tela e apresente tamb�m:
- Soma dos elementos da diagonal principal - DP
- Maior e menor elemento da diagonal secund�ria - DS
- Diferen�a das somas dos elementos acima da DP e abaixo da DP*/
main()
{
    setlocale(LC_ALL,"Portuguese");

    srand(time(NULL));

    int *n = new int;
    int *valor = new int(0);
    int *DP = new int(0);
    int *DS = new int(0);
    int *somaDP = new int(0);
    int *somaDS = new int(0);
    int *i = new int(0);
    int *maior = new int(0);

    cout << "Informe a dimen��o da matriz: ";
    cin >> *n;
    fflush(stdin);

    int *mat = new int[*n * *n];

    /*
    Com ponteiros, n�o conseguimos criar uma matriz bidimensional.
    Todavia, ainda assim, conseguimos criar uma de maneira unidimensional.

    Quando voc� declarou
    int *mat = new int[*n * *n];
    na pr�tica, voc� criou um vetor de tamanho n*n. Se n for 3, o vetor ter�
    tamanho 9. Dessa forma, alocamos espa�o suficiente para representar uma matriz
    nxn usando esse vetor.

    Por�m, n�o podemos acessar os valores do vetor da mesma maneira que acessamos
    os valores de uma matriz usando "[][]", pois estamos utilizando um vetor
    unidimensional. Para contornar isso, utilizamos o seguinte c�lculo: mat[i*n+j].

    Tome como exemplo a seguinte matriz:
    1 2 3
    4 5 6
    7 8 9

    Ela pode ser representada em um vetor:
    VETOR:
        Valor: 1 2 3 4 5 6 7 8 9
        �ndice: 0 1 2 3 4 5 6 7 8

    Agora, fazendo o teste de mesa:
    C�lculo: mat[i*n+j]
    0*3+0 = 0 -> valor: 1
    0*3+1 = 1 -> valor: 2
    0*3+2 = 2 -> valor: 3
    1*3+0 = 3 -> valor: 4
    1*3+1 = 4 -> valor: 5
    1*3+2 = 5 -> valor: 6
    ...

    Como voc� pode ver, dessa forma conseguimos acessar todos os valores do vetor.
    Por�m, note que ainda � importante utilizar dois la�os, um com a vari�vel i e
    outro com a vari�vel j, algo que faltava em seu c�digo.

    O que faltava em seu c�digo era o c�lculo para acessar os valores
    e os dois la�os para manipular i e j.
    */


    for( int *i = new int(0); *i < (*n); (*i)++)
    {
        for(int *j = new int(0); *j < *n; (*j)++)
        {
            mat[*i * *n+*j] = rand() %(*n * *n);
        }
    }

    cout<<"Matriz gerada: "<<endl;
    for(int *i = new int(0); *i < *n; (*i)++)
    {
        for(int *j = new int(0); *j < *n; (*j)++)
        {
            cout << mat[*i * *n + *j] << "\t";
        }
        cout << "\n";
    }

    int *k = new int(0);
    for(*k ; *k < *n; (*k)++)
    {
        for(int *j = new int(0); *j < *n; (*j)++)
        {
            if(*k==*j)
            {
                *somaDP+= mat[*k * * n + *j];
            }
            if((*k+*j)== *n-1)
            {
                *somaDS+=mat[*k * * n + *j];
                *DS= mat[*k * *n + *j];
                DS++;
            }
        }
    }
    DS-=*k;

    int *menor = new int(*n * *n);
    for(int *m = new int(0); *m < *n; (*m)++)
    {
        if(*maior<*DS)
        {
            *maior=*DS;
        }
        if(*menor>*DS)
        {
            *menor=*DS;
        }
        DS++;
    }

    *valor=(*somaDP-*somaDS);
    cout<<endl;
    cout<<"Soma da diagonal Principal: "<< *somaDP<<endl;
    cout<<"Maior elemento DS: "<< *maior<<endl;
    cout<<"Menor elemento DS: "<< *menor<<endl;
    cout<<"Diferen�a das somas dos elementos acima da DP e abaixo da DP: "<<fabs(*valor)<<endl;

}
