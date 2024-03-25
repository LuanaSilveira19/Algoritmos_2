#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cmath>

using namespace std;

main()
{
    setlocale(LC_ALL,"Portuguese");
    cout<<"------------------------Livro e Cia-----------------------"<<endl;
    cout<< "Descrição\t\t|"<< "Código\t|"<< "Valor R$\t|"<< "Desconto"<<endl;
    cout<< "Folha branca A4 com 500\t|"<< "1\t|"<< "R$28.00\t"<<"|7%"<<endl;
    cout<< "Caneta Bic ponta fina  \t|"<< "2\t|"<< "R$6.30 \t"<<"|5%"<<endl;
    cout<< "Caderno 10 matérias    \t|"<< "3\t|"<< "R$22.00\t"<<"|5%"<<endl;
    cout<< "Caneta marca texto     \t|"<< "4\t|"<< "R$17.80\t"<<"|6%"<<endl;
    cout<< "Cola bastão            \t|"<< "5\t|"<< "R$5.50 \t"<<"|7%"<<endl;
    cout<< "Corretor ortográfico   \t|"<< "6\t|"<< "R$11.00\t"<<"|10%"<<endl;
    cout<< "Lápis preto            \t|"<< "7\t|"<< "R$4.50 \t"<<"|2%"<<endl;
    cout<<"Mochila com repartiento\t|"<< "8\t|"<< "R$138.00\t"<<"|7%"<<endl;
    cout<< "Caderno de desenho    \t|"<< "9\t|"<< "R$8.00 \t"<<"|5%"<<endl;
    cout<<"---------------------------------------------------------"<<endl;

    int op, codigo, itens, folha=0, bic=0, cad_10M=0;
    int Mtexto=0, cd=0, mochila=0, lapis=0, corr=0, cola=0;
    float V1,V2, V3, V4, V5, V6, V7, V8, V9;
    float D1, D2, D3, D4, D5, D6, D7, D8, D9, total;
    cout<<endl;
    do
    {
        cout<<" Escolha a sua opção:"<<endl;
        cout<<" 1- Incluir mais um tem"<<endl;
        cout<<" 2- Encerrar a compra"<<endl;
        cout<< "Sua opção: ";
        cin>> op;
        fflush(stdin);

        switch(op)
        {
        case 1 :
            system("cls");
            cout << "Informe o código do produto: ";
            cin>> codigo;
            cout << "Informe a quantidade de itens: ";
            cin>> itens;

            if(codigo <1 || codigo >9)
            {
                cout<<"Informe um código válido!";
            }
            else
            {
                if(codigo==1)
                {
                    folha+=itens;
                }
                if(codigo==2)
                {
                    bic+=itens;
                }
                if(codigo==3)
                {
                    cad_10M+=itens;
                }
                if(codigo==4)
                {
                    Mtexto+=itens;
                }
                if(codigo==5)
                {
                    cola+=itens;
                }
                if(codigo==6)
                {
                    corr+=itens;
                }
                if(codigo==7)
                {
                    lapis+=itens;
                }
                if(codigo==8)
                {
                    mochila+=itens;
                }
                if(codigo==9)
                {
                    cd+=itens;
                }
            }
            getchar();
            break;
        }


    }
    while(op != 2);

    cout<< fixed;
    cout.precision(2);
    cout<<"-----------------------------------Nota Fiscal--------------------------------------"<<endl;
    cout<< "Descrição\t\t"<< "QTD "<< " Valor do item\t"<< "Desconto\t"<< "Valor total item"<<endl;
    if(folha!=0)
    {
        V1= (28.00 * folha);
        D1= (V1* 7.0/100.0);
        V1= V1- (V1* 7.0/100.0);
        cout<< "Folha branca A4 com 500";
        cout.width(3);
        cout.fill(' ');
        cout<<folha;
        cout.width(12);
        cout.fill(' ');
        cout<<28.00 * folha;
        cout.width(18);
        cout.fill(' ');
        cout<< right<< D1;
        cout.width(24);
        cout.fill(' ');
        cout<< right<< V1<<endl;

    }
    if(bic!=0)
    {
        V2= (6.30 * bic);
        D2= (V2* 5.0/100.0);
        V2= V2- (V2* 5.0/100.0);
        cout<< "Caneta Bic ponta fina  ";
        cout.width(3);
        cout.fill(' ');
        cout<<bic;
        cout.width(12);
        cout.fill(' ');
        cout<<6.30*bic;
        cout.width(18);
        cout.fill(' ');
        cout<< right<< D2;
        cout.width(24);
        cout.fill(' ');
        cout<< right<< V2<<endl;
    }
    if(cad_10M!=0)
    {
        V3= (22.00 * cad_10M);
        D3= (V3* 5.0/100.0);
        V3= V3- (V3* 5.0/100.0);
        cout<< "Caderno 10 matérias    ";
        cout.width(3);
        cout.fill(' ');
        cout<<cad_10M;
        cout.width(12);
        cout.fill(' ');
        cout<<22.00*cad_10M;
        cout.width(18);
        cout.fill(' ');
        cout<< right<< D3;
        cout.width(24);
        cout.fill(' ');
        cout<< right<< V3<<endl;
    }
    if(Mtexto!=0)
    {
        V4= (17.80 * Mtexto);
        D4= (V4* 6.0/100.0);
        V4= V4- (V4* 6.0/100.0);
        cout<< "Caneta marca texto     ";
        cout.width(3);
        cout.fill(' ');
        cout<<Mtexto;
        cout.width(12);
        cout.fill(' ');
        cout<<17.80*Mtexto;
        cout.width(18);
        cout.fill(' ');
        cout<< right<< D4;
        cout.width(24);
        cout.fill(' ');
        cout<< right<< V4<<endl;
    }
    if(cola!=0)
    {
        V5= (5.50 * cola);
        D5= (V5* 7.0/100.0);
        V5= V5- (V5* 7.0/100.0);
        cout<< "Cola bastão            ";
        cout.width(3);
        cout.fill(' ');
        cout<<cola;
        cout.width(12);
        cout.fill(' ');
        cout<<5.50*cola;
        cout.width(18);
        cout.fill(' ');
        cout<< right<< D5;
        cout.width(24);
        cout.fill(' ');
        cout<< right<< V5<<endl;
    }
    if( corr!=0)
    {
        V6= (11.00 * corr);
        D6= (V6* 10.0/100.0);
        V6= V6- (V6* 10.0/100.0);
        cout<< "Corretor ortográfico   ";
        cout.width(3);
        cout.fill(' ');
        cout<<corr;
        cout.width(12);
        cout.fill(' ');
        cout<<11.00*corr;
        cout.width(18);
        cout.fill(' ');
        cout<< right<< D6;
        cout.width(24);
        cout.fill(' ');
        cout<< right<< V6<<endl;
    }
    if( lapis!=0)
    {
        V7= (4.50 * lapis);
        D7= (V7* 2.0/100.0);
        V7= V7- (V7* 2.0/100.0);
        cout<< "Lápis preto            ";
        cout.width(3);
        cout.fill(' ');
        cout<<lapis;
        cout.width(12);
        cout.fill(' ');
        cout<<4.50*lapis;
        cout.width(18);
        cout.fill(' ');
        cout<< right<< D7;
        cout.width(24);
        cout.fill(' ');
        cout<< right<< V7<<endl;
    }
    if( mochila!=0)
    {
        V8= (138.00 * mochila);
        D8= (V8* 7.0/100.0);
        V8= V8- (V8* 7.0/100.0);
        cout<<"Mochila com repartiento";
        cout.width(3);
        cout.fill(' ');
        cout<<mochila;
        cout.width(12);
        cout.fill(' ');
        cout<<138.00*mochila;
        cout.width(18);
        cout.fill(' ');
        cout<< right<< D8;
        cout.width(24);
        cout.fill(' ');
        cout<< right<< V8<<endl;

    }
    if( cd!=0)
    {
        V9= (8.00 * cd);
        D9= (V9* 5.0/100.0);
        V9= V9- (V9* 5.0/100.0);
        cout<<"Caderno de desenho    ";
        cout.width(3);
        cout.fill(' ');
        cout<<cd;
        cout.width(12);
        cout.fill(' ');
        cout<<8.00*cd;
        cout.width(18);
        cout.fill(' ');
        cout<< right<< D9;
        cout.width(24);
        cout.fill(' ');
        cout<< right<< V9<<endl;
    }

    total= V1+ V2+ V3+ V4+ V5+ V6+ V7+ V8+ V9;
    cout<<"Total da compra: ";
    cout.width(65);
    cout.fill('.');
    cout<<total<<endl;

}
