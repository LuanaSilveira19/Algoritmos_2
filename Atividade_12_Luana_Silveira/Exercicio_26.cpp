#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<cstring>

using namespace std;
void concatena(string **S1, string **S2)
{
    string *S3 = new string;

    cout<<"Escreva algo para a primeira string: ";
    getline(cin, *(*S1));
    fflush(stdin);
    cout<<endl;
    cout<<"Escreva algo para a segunda string: ";
    getline(cin, *(*S2));
    fflush(stdin);
    cout<<endl;

    *S3= *(*S1)+ *(*S2);
    cout<<"String 1: "<<*(*S1)<<endl;
    cout<<"String 2: "<<*(*S2)<<endl;
    cout<<"String 3: "<<*S3<<endl;

}
main()
{
    setlocale(LC_ALL,"Portuguese");
    string *S1 = new string;
    string *S2 = new string;

    concatena(&S1,&S2);
}
