#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<ctime>

using namespace std;

main()
{
    setlocale(LC_ALL, "portuguese");
    srand(time(NULL));
    int i, aux, x, cont_par=0, cont_impar=0;
    int V[10], perc_par, perc_impar;
    bool flag;
    float media, soma=0;

    cout<<"Números do vetor:"<<endl;
    for(i = 0; i < 10; i++)
    {

        aux = rand() % 34+16;

        if(i == 0)
            V[i] = aux;
        else
        {
            flag = false;
            for(x = 0; x < i; x++)
            {
                if(aux ==  V[x])
                {
                    flag = true;
                    break;
                }
            }
            if(flag)
                i--;
            else
                V[i] = aux;
        }

    }
    for(i = 0; i < 10; i++)
    {
        soma += V[i];
    }

    cout << fixed;
    cout.precision(2);
    media =soma/10;
    for(i = 0; i < 10; i++)
    {
        if(V[i] %2==0)
        {
            cont_par++;
        }
        else
        {
            cont_impar++;
        }
        cout<< V[i]<<", ";
    }
    perc_par = (cont_par * 100.0) / 10;
    perc_impar = (cont_impar * 100.0) / 10;



    cout<<endl;
    cout<<endl;
    cout<<"Vetor ordenado de forma crescente: "<<endl;

    for(i = 0; i < 9; i++)
    {
        for(x = i + 1; x < 10; x++)
        {
            if(V[i] > V[x])
            {
                aux = V[i];
                V[i] = V[x];
                V[x] = aux;
            }
        }
    }
    for(i = 0; i < 10; i++)
    {
        cout << V[i] << ", ";
    }

    cout<<endl;
    cout<<endl;

    cout<<"A quantidade de valores pares é: "<<cont_par<<endl;
    cout<<"A quantidade de valores impares é: "<<cont_impar<<endl;
    cout<<"O percentual de números impares é de "<<perc_impar <<"%"<<endl;
    cout<<"O percentual de números pares é de "<<perc_par <<"%"<<endl;
    cout<<"A média dos valores é:"<<media<<endl;





}


