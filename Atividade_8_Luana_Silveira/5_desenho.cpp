#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<cstring>

using namespace std;
void mostra(int *t)
{
    char fig[*t][*t];
    for(int i=0; i<*t; i++)
    {
        for(int j=0; j<*t; j++)
        {
            if(i==j || i+j==*t-1 || i==0 || i==*t-1 || j==0||j==*t-1)
            {
                fig[i][j]='*';
            }
            else{
                fig[i][j]=' ';
            }

               cout<<fig[i][j]<< " ";
        }
         cout<<endl;
    }
}
main()
{
      setlocale(LC_ALL,"Portuguese");
      int tam;
      cout<<"Quadrado de *"<<endl;
      cout<<"Informe o tamanho do quadrado:";
      cin>>tam;
      mostra(&tam);

}
