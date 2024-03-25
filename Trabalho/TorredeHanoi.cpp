#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<cstring>

using namespace std;

void move_disco(int d, char ori, char dest, char aux)
{
    if(d==1)
    {
        cout<<"Mover disco " <<d<< " de "<<ori<<" para "<<dest<<endl;
    }
    else{
           move_disco(d-1,ori,aux,dest);
           cout<<"Mover disco " <<d<< " de "<<ori<<" para "<<dest<<endl;
            move_disco(d-1,aux,dest,ori);
    }
}

main()
{
      setlocale(LC_ALL,"Portuguese");
      int discos=3;
cout<<"Passos para mover os discos."<<endl;
cout<<endl;
      move_disco(discos,'A','C', 'B');

}
