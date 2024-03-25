#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<ctime>
#include<cstring>

using namespace std;
void ordena(int **p1, int **p2)
{
    int aux1, aux2;
    for(int i=0; i<9; i++)
    {
        for(int x=i; x<10; x++)
        {
            if((*p1)[i]>(*p1)[x])
            {
                aux1=(*p1)[i];
                (*p1)[i] =(*p1)[x];
                (*p1)[x]=aux1;
            }
        }
    }
    for(int i=0; i<9; i++)
    {
        for(int x=i; x<10; x++)
        {
            if((*p2)[i]>(*p2)[x])
            {
                 aux2=(*p2)[i];
                (*p2)[i] =(*p2)[x];
                (*p2)[x]=aux2;
            }
        }
    }
     cout<<"Vetor 1: ";
    for(int i=0; i<10; i++)
    {
        cout<<(*p1)[i]<<", ";
    }
    cout<<endl;
    cout<<endl;
    cout<<"Vetor 2: ";
    for(int i=0; i<10; i++)
    {
        cout<<(*p2)[i]<<", ";
    }
    cout<<endl;
    cout<<endl;
    cout<<"Os números são iguais nas posições:";
    for( int i=0; i<10; i++)
    {
        if((*p1)[i]== (*p2)[i] )
        {
            cout<<i<<", ";
        }
    }
    cout<<endl;
}


main()
{
      setlocale(LC_ALL,"Portuguese");

    int vet1[10],vet2[10],*pv1, *pv2;
    int aux1, aux2, cont=0;
    bool dux1,dux2;
    pv1=vet1;
    pv2=vet2;

    srand(time(NULL));

    for(int i=0; i<10; i++)
    {
        aux1= rand()%15+5;
        aux2=rand()%15+5;
        cont++;

        if(i==0)
        {
            *(pv1 + i) = aux1;
            *(pv2 + i) = aux2;
        }
        else{
            dux1=false;
            dux2=false;
            for(int j=0; j<i; j++)
            {
                if(aux1==*(pv1 + j))
                {
                    dux1= true;
                    break;
                }
                 if(aux2==*(pv2 + j))
                {
                    dux2= true;
                    break;
                }
            }
            if(dux1)
                i--;
            else
            *(pv1 + i)=aux1;
            if(dux2)
                i--;
            else
            *(pv2 + i)=aux2;

        }

    }

    ordena(&pv1, &pv2);

}
