#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<ctime>

using namespace std;

main()
{
    setlocale(LC_ALL,"Portuguese");
    int *pv1 = new int[10];
    int *pv2 = new int[10];
    int *pv3 = new int[20];
    int *i = new int(0);
    srand(time(NULL));
    while(*i < 10)
    {
        *pv1 = rand() % 100;
        *pv2 = rand() % 100;
        pv1++;
        pv2++;
        (*i)++;
    }
    pv1 -= *i;
    pv2 -= *i;

    cout<<"Vetor 1: ";

    for(int *x = new int(0); *x < 10; (*x)++)
    {
        cout << *pv1 << "| ";
        pv1++;

    }
     pv1 -= *i;
    cout<<endl;
    cout<<"Vetor 2: ";
    for(int *x = new int(0); *x < 10; (*x)++)
    {
        cout << *pv2 << "| ";
        pv2++;

    }
 pv2 -= *i;

    for(int *x = new int(0); *x < 20; (*x)+=2)
    {

        pv3[*x]=  *pv1;
        pv3[*x+1]=  *pv2;
        pv1++;
        pv2++;
    }
    pv1 -= *i;
    pv2 -= *i;


     cout<<endl;

cout<<"Vetor 3: ";

 for(int *x = new int(0); *x < 20; (*x)++)
    {
       cout << *pv3 << ", ";
        pv3++;
    }
}
