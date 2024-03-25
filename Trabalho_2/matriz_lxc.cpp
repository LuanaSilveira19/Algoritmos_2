#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<ctime>

using namespace std;

main()//cuidar que as linhas tem números iguais
{
    setlocale(LC_ALL,"Portuguese");
    int *l = new int(0);
    int *c = new int(0);

    cout << "Informe o numero de linhas: ";
    cin >> *l;
    fflush(stdin);

    cout << "Informe o numero de colunas: ";
    cin >> *c;
    fflush(stdin);

    int *mat = new int[*l * *c];
    srand(time(NULL));
    for( int *i = new int(0); *i < (*l * *c); (*i)++)
    {
        mat[*i] = rand() % 100;
    }
    cout<<"Matriz gerada: "<<endl;
    for(int *i = new int(0); *i < *l; (*i)++)
    {
        for(int *j = new int(0); *j < *c; (*j)++)
        {
            cout << mat[*i] << "\t";
        }
        cout << "\n";
    }
     int *DP = new int(0);
      int *DS = new int(0);
     int *aux = new int(0);
     int *aux2 = new int(0);
     int *i = new int(0);
    for(*i ; *i < *l; (*i)++)
    {
        for(int *j = new int(0); *j < *c; (*j)++)
        {
            if(*i==*j)
            {
                  *DP= mat[*i];
                  (*aux)++;
                  DP++;
            }
            if((*i+*j)== *c-1)
            {
                *DS=mat[*i];
                DS++;
                (*aux2)++;
            }
        }
    }
      DS-= *i;
      DP-= *i;

     cout<<endl;
  cout<<"Diagonal Principal: ";
    for(int *i = new int(0); *i < *aux; (*i)++)
    {
         cout << *DP<< ",";
        DP++;
    }
        cout<<endl;
  cout<<"Diagonal Secundária: ";
    for(int *i = new int(0); *i < *aux2; (*i)++)
    {
         cout << *DS<< ",";
        DS++;
    }
}
