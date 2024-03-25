#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<ctime>

using namespace std;


main()
{
     setlocale(LC_ALL,"Portuguese");
    int *pvet = new int[10];
    int *i = new int(0);
    int *aux = new int(0);
    bool *igual = new bool(false);
    int *paux = new int[10];

    srand(time(NULL));
     while(*i < 10)
     {
        //aux= 31 + rand()% (max- min +1);
                            //24-> 0-23
           *aux= rand() % 10;//25 + 30;
           if(*i == 0)
           {
               *pvet = *aux;
           }
           else
           {
               *igual=false;

                paux = pvet;

                //cout << "paux: " << paux << " = " << *paux << endl;

               for(int *x = new int(0); *x < *i; (*x)++)
               {
                   paux--;
                   //cout << "paux: " << paux << " = " << *paux << endl;
                   //cout<<pvet<<endl;
                   if(*aux == *paux)
                   {
                       *igual=true;

                       break;
                   }
               }
               if(*igual)
               {
                 //  cout << ">>>>> Achou igual" << endl << endl;
                   (*i)--;
                   pvet--;
               }
               else
                  *pvet = *aux;
           }

          // cout << "pvet: " << pvet << " = " << *pvet << endl << endl;
           pvet++;
          // getchar();
           (*i)++;
 }
    pvet-=*i;

 /* while(*i < 10)
       {
           *aux= 31 + rand()% 24;
           if(*i==0)
           {
               pvet[*i] = *aux;
           }
           else
           {
               *igual=false;
               for(int *x = new int(0); *x< *i; (*x)++)
               {
                   if(*aux== pvet[*x])
                   {
                       *igual=true;
                       break;
                   }
               }
               if( *igual)
                   (*i)--;
               else
                   pvet[*i]  = *aux;
           }
           (*i)++;
       }
*/
    cout<<"Vetor:"<<"\t";
    for(int *x = new int(0); *x< 10; (*x)++)
    {
        cout << *pvet << "| ";
        pvet++;
    }
    pvet -= *i;
    cout<<endl;
    for(int *x = new int(0); *x< 5; (*x)++)
    {
        for(int *j = new int(5); *j< 10; (*j)++)
        {
            *aux=(pvet)[*x];
            (pvet)[*x]= (pvet)[*j];
            (pvet)[*j]= *aux;
        }
    }
    cout<<"Trocado:";
    for(int *x = new int(0); *x< 10; (*x)++)
    {
        cout << *pvet << "| ";
        pvet++;
    }


}
