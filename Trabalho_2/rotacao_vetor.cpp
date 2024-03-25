#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<ctime>

/*
Rotação de vetor
Escreva um programa que receba um vetor e um número K como entrada e rotacione o vetor K vezes para a direita.
Exemplo de entrada:
Vetor: [1, 2, 3, 4, 5]
K: 2
Saída esperada:
Vetor rotacionado: [4, 5, 1, 2, 3]
*/

using namespace std;

main(){

    setlocale(LC_ALL, "Portuguese");
    int *tam10 = new int(0);
    int *i = new int(0);
    int *vezes = new int(0);

    cout << "Digite o valor que deseja gerar o vetor: ";
    cin >> *tam10;

    int *vet = new int[*tam10];

    srand(time(NULL));
    while(*i < *tam10){
        *vet = rand() % 30;
        vet++;
        (*i)++;
    }

    vet -= *i;


    for(int *k = new int(0); *k < *tam10; (*k)++){
        cout << vet[*k] << "| ";
    }

    int vet2[*tam10];
    cout << endl;
    cout << "Quantas vezes rotacionar: ";
    cin >> *vezes;

     for (int *i = new int(0); *i < *tam10; (*i)++) {
        int *newIndex = new int((*i + *vezes) % *tam10);
        vet2[*newIndex] = vet[*i];
        cout<<endl;
    }


    for(int *k = new int(0); *k < *tam10; (*k)++){
        cout << vet2[*k] << "| ";
    }
}
