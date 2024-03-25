#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<cstring>

using namespace std;
void vender(int *j, int *c)
{
    char op;
    int num, cont=0;
   bool lotado = false;

   for(int i = 0; i < 20; i++){
        if(*(j + i) == 1){
           if(*(c+ i) == 1){
                cont++;
            }
        }
    }

    if(cont == 20){
        lotado = true;
        cout << "Ônibus lotado!" << endl;
        return;
    }
    if(lotado == false){
    cout<<"Você deseja janela ou corredor(digite J ou C)?";
    cin>>op;
    cout<<"Informe o número da poltrona(1-20):";
    cin>>num;
    num= num-1;
    if(num>0 && num<21)
    {
        if(op=='J'|| op=='j')
        {
            if(*(j+ num)==1)
                cout<<"Poltrona ocupada!"<<endl;
            else
            {
                *(j+ num)=1;
                cout<<"Venda efetivada!"<<endl;
            }
        }
        else if(op=='C'|| op=='c')
        {
            if(*(c+ num)==1)
                cout<<"Poltrona ocupada!"<<endl;
            else
            {
                *(c+ num)=1;
                cout<<"Venda efetivada!"<<endl;
            }
        }
        else
        {
            cout<<"Opção inválida!"<<endl;;
        }
    }
    else
    {
        cout<<"Opção de poltrona inválida!"<<endl;
    }
    }
    else{
        cout << "Ônibus lotado!" << endl;
    }
}
void mostra(int *j, int *c)
{
    string descricaoj;
    string descricaoc;
    cout << "JANELA" << "\t\t\t";
    cout << "CORREDOR" << endl;
    for(int i = 0; i < 20; i++){
        if(*(j + i) == 0){
        descricaoj = "Livre";
        }
        else{
            descricaoj = "Ocupada";
        }
        if(*(c + i) == 0){
        descricaoc = "Livre";
        }
        else{
            descricaoc = "Ocupada";
        }
        cout << i+1<< " - " << descricaoj << "\t\t";
        cout << i+1<< " - " << descricaoc << endl;
    }
}
main()
{
    setlocale(LC_ALL,"Portuguese");

    int menu, janela[20]= {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    int corredor[20]= {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    do
    {
        system("cls");
        cout << "-------------------------------------------" << endl;
        cout << "--------------Vagas no ônibus--------------" << endl;
        cout << "-- 1 Vender passagem                     --" << endl;
        cout << "-- 2 Mostrar mapa de ocupação do ônibus. --" << endl;
        cout << "-- 3 Encerrar                            --" << endl;
        cout << "-------------------------------------------" << endl;
        cout << "Sua escolha: ";
        cin >> menu;
        fflush(stdin);

        switch(menu)
        {
        case 1 :
            system("cls");
            vender(janela,corredor);
            system("pause");
            break;
        case 2:
            system("cls");
            mostra(janela,corredor);
            system("pause");
            break;
        case 3 :
            system("cls");
            cout << "\nPrograma finalizado.";
            getchar();
            break;

        }

    }
    while(menu != 3);
}
