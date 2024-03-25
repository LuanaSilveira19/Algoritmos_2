#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<cstring>

using namespace std;

main()
{
    setlocale(LC_ALL,"Portuguese");
    int n;
    cout<<"Digite um número: ";
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        for(int j=n-i; j>=1; j--)
            cout<<" ";
        for(int j=1; j<=i; j++)
            cout<<"x";
        cout<<"\n";
    }
}
