#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<cstring>

using namespace std;
void mostra(int (*notas)[3], int **n)
{
    for(int *i = new int(0); *i < *(*n); (*i)++)
    {
        for(int *j = new int(0); *j < 3; (*j)++)
        {
            cout << notas[*i][*j] << "\t";
        }
        cout << "\n";
    }
}

main()
{
    setlocale(LC_ALL,"Portuguese");
    int *n = new int(0);
    cout << "Informe o numero de linhas: ";
    cin >> *n;
    fflush(stdin);

   int (*notas)[3] = new int[*n][3];
    for(int *i = new int(0); *i < *n; (*i)++)
    {
        for(int *j = new int(0); *j < 3; (*j)++)
        {
            cout<<"Informe ["<<*i<<"]["<<*j<<"]: ";
            cin >> notas[*i][*j];
        }
    }
    cout<<"Mostra: "<<endl;
   mostra(notas,&n);

}
