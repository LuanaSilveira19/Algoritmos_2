#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cmath>

using namespace std;

main()
{
    setlocale(LC_ALL,"Portuguese");

    int menu, prim, i, resultado=0, soma=0;
    float num,base, exp, raiz, a;
    int b, c, d;

    do
    {
        system("cls");
        cout << "################################################" << endl;
        cout << "##### Escolha uma das opções para cálcular.#####" << endl;
        cout << "##### 0 - Sair                             #####" << endl;
        cout << "##### 1 - Potenciação                      #####" << endl;
        cout << "##### 2 - Raiz quadrada                    #####" << endl;
        cout << "##### 3 - Arredondar número                #####" << endl;
        cout << "##### 4 - Número primo                     #####" << endl;
        cout << "##### 5 - Número perfeito                  #####" << endl;
        cout << "################################################" << endl;
        cout << "Sua escolha: ";
        cin >> menu;
        fflush(stdin);

        switch(menu)
        {
        case 0 :
            system("cls");
            cout << "Programa finalizado.";
            getchar();
            break;
        case 1 :
            system("cls");
            cout<<"--------Potenciação:---------"<<endl;
            do
            {
                cout<<"Digite o número para a base: ";
                cin>>base;
                cout<<"Digite o expoente: ";
                cin>>exp;
                b=base;
                c=exp;

                if(base<0 || exp<0 || base!=b || exp!=c)
                {
                    cout<<"Informe valores inteiros e  positivos para a base e o expoente. "<<endl;
                }
                else
                {
                    cout<<"A resposta é: ";
                    cout << pow(base,exp)<<endl;
                }
            }
            while(base<0 || exp<0 || base!=b || exp!=c);
            system("pause");
            getchar();
            break;
        case 2:
            system("cls");
            cout<<"-------------Raiz quadrada:------------"<<endl;
            do
            {
                cout<<"Informe o número para descobrir a raiz: ";
                cin>>raiz;
                d=raiz;

                if(raiz < 0 || raiz!=d )
                {
                    cout<<"Informe somente valores inteiros e positivos para a raiz."<<endl;
                }
                else
                {
                    cout<<"A resposta é: ";
                    cout << sqrt(raiz)<<endl;
                }
            }
            while(raiz < 0 || raiz!=d );

            system("pause");
            getchar();
            break;

        case 3:
            system("cls");
            do
            {
                cout<<"-----------Arredondar número:-----------"<<endl;
                cout<<"Informe o número : ";
                cin>>num;
                b=num;
                if(num==b){
                    cout<<"Insira valores floats para serem transformados."<<endl;
                }
                else
                {

                cout<<"A resposta é: ";
                cout << round(num)<<endl;
                }
            }
            while(num==b);
                system("pause");
            getchar();
            break;
        case 4:
            system("cls");
            cout<<"-------------Número primo:--------------"<<endl;
         do{
            cout<<"Informe um número para ser verificado : ";
            cin>>prim;
b=prim;
            if(prim <= 0 || prim!=b)
            {
                cout<<"Informe somente valores inteiros e positivos."<<endl;
            }
            for(i=2; i< b; i++)
            {
                if(b % i==0)
                {
                    resultado++;
                }
            }
            if(resultado ==0)
            {
                cout<<"O número "<< b <<" é um número primo."<<endl;
            }
            else
            {
                cout<<"O número "<< b <<" não é um número primo."<<endl;
            }
  system("pause");
  getchar();
            }while(prim <= 0 || prim!=b);

            break;
        case 5:
            system("cls");
            cout<<"-------------Número perfeito:--------------"<<endl;
            do{
            cout<<"Informe um número para ser verificado : ";
            cin>>a;
        b=a;
            if(a <0 || a!=b)
            {
                cout<<"Informe somente valores inteiros e positivos."<<endl;
            }
            soma=0;
            for(i=1; i<= (b/2); i++)
            {
                if(b%i==0)
                    soma+=i;
            }

            if(soma== b)
            {
                cout<<"É número perfeito."<<endl;
            }
            else
            {
                cout<<"Não é número perfeito."<<endl;
                system("pause");
            }


            }while(a <0 || a!=b);
  system("cls");


        }
    }
    while(menu != 0);
}
