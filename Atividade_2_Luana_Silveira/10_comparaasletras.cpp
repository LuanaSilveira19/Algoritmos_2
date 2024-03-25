#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<cstring>

using namespace std;

main()
{
    setlocale(LC_ALL,"portuguese");
    string s1, s2;
    int aux=0;

    cout << "Digite uma palavra: ";
    getline(cin, s1);
    fflush(stdin);

    cout << "Digite outra palavra: ";
    getline(cin, s2);
    fflush(stdin);


        for(int i =0; i< s1.size(); i++)
        {

            for(int x =0; x< s2.size(); x++)
            {
                if(s1[i]==s2[x]){
                    aux++;
                    break;
                }
            }
        }
        if (aux==s1.size() || aux==s1.size())
        {
            cout<<"Sim";
        }


    else
    {
        cout<<"Não";
    }



}
