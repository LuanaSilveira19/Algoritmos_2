#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<ctime>
#include<cstring>

using namespace std;
void inter(int **p1, int **p2, int **p3 )
{
    cout<<"X1= {";
    for(int i=0; i<6; i++)
    {
        cout<<((*p1)[i])<<", ";
    }
    cout<<" }"<<endl;
    cout<<"X2= {";
    for(int i=0; i<6; i++)
    {
        cout<<((*p2)[i])<<", ";
    }
     cout<<"}"<<endl;
    int j=0;
    bool igual=false;

cout << "X3= {";
    for (int i = 0; i < 6; i++) {
        for (int x = 0; x < 6; x++) {
            bool igual = false;
            if (*(*p1 + i) == *(*p2 + x)) {
                for (int h = 0; h < j; h++) {
                    if (*(*p1 + i) == *(*p3 + h))
                        igual = true;
                }
                if (!igual) {
                    igual = false;
                    *(*p3 + j) = *(*p1 + i);
                    cout << *(*p3 + j) << ", ";
                    j++;
                    break;
                }
            }
        }
    }
      cout<<"}"<<endl;
}


main()
{
    setlocale(LC_ALL,"Portuguese");

    int x1[6],x2[6], x3[6],*px1, *px2, *px3;
    int aux1, aux2, cont=0;
    bool dux1,dux2;
    px1=x1;
    px2=x2;
    px3=x3;
    srand(time(NULL));
    for(int i=0; i<6; i++)
    {
        aux1= rand()%20;
        aux2=rand()%20;
        cont++;

        if(i==0)
        {
            *(px1 + i) = aux1;
            *(px2 + i) = aux2;
        }
        else{
            dux1=false;
            dux2=false;
            for(int j=0; j<i; j++)
            {
                if(aux1==*(px1 + j))
                {
                    dux1= true;
                    break;
                }
                 if(aux2==*(px2 + j))
                {
                    dux2= true;
                    break;
                }
            }
            if(dux1)
                i--;
            else
            *(px1 + i)=aux1;
            if(dux2)
                i--;
            else
            *(px2 + i)=aux2;
        }
    }
   inter(&px1,&px2,&px3);
}
