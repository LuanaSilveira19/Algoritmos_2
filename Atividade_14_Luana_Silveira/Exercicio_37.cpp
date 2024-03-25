#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<fstream>
#include<sstream>
#include<vector>

using namespace std;
struct produto
{
    int cod;
    string nome;
    float valor;
    int qtd;
};
void carregar_dados (produto x[], int &i)
{
    char aux[2000];
    int cont = 0;
    ifstream ler("produtos.txt");
   if(ler.is_open())
    {
        ler.getline(aux, 2000, '#');
        while(!ler.fail())
        {
            if(cont == 0)
                i++;
            cont++;
            if(cont == 1)
            {
                x[i].cod = atoi(aux);
            }
            else if(cont == 2)
            {
                x[i].nome = aux;
            }
            else if(cont == 3)
            {
                x[i].valor = atof(aux);
            }
            else if(cont == 4)
            {
                cont = 0;
                x[i].qtd = atoi(aux);
            }
            ler.getline(aux, 2000, '#');
        }
    }
    ler.close();
}

produto ler (produto x[], int &i)
{
    int aux;
    bool flag= false;
    i++;
    do
    {
         flag= false;
        cout << "Digite o codigo do produto: ";
        cin >> aux;
        fflush(stdin);
        for(int j=0; j <= i; j++)
        {
            if(aux == x[j].cod)
            {
                flag= true;
                cout<<"Esse codigo ja existe!"<<endl;
                break;
            }
        }
        if(flag==false)
        {
            x[i].cod = aux;
        }


    }
    while(flag!=false);

    cout << "Informe o nome do produto:";
    getline(cin, x[i].nome);
    fflush(stdin);

    cout << "Digite o valor do produto: ";
    cin >> x[i].valor;
    fflush(stdin);

    cout << "Digite a quantidade do produto: ";
    cin >> x[i].qtd;
    fflush(stdin);


    if(flag)
    {
        ofstream escreve;
        escreve.open("produtos.txt", ios::app);
        if(escreve.is_open())
        {
            escreve << x[i].cod << "#" << x[i].nome << "#" <<x[i].valor << "#"<<x[i].qtd << "#";
        }
        escreve.close();
            cout<<"Produto cadastrado!"<<endl;
        }
    return x[i];
}
void mostra (produto x[], int &i)
{
    cout << "PRODUTOS: " << endl;
    for(int j = 0; j <= i; j++)
    {
        cout << "Codigo: " << x[j].cod << endl;
        cout << "Nome: " << x[j].nome << endl;
        cout << "Valor: R$" << x[j].valor << endl;
        cout << "Quantidade: " << x[j].qtd << endl;
        cout << "..................................." << endl;
    }
}
void estoque_zerado(produto x[], int &i)
{
    cout << "PRODUTOS COM FALTA DE ESTOQUE: " << endl;
    bool flag=true;
    for(int j = 0; j<=i; j++)
    {
        if(x[j].qtd==0)
        {
            flag=false;
            cout << "Nome: " << x[j].nome << endl;
            cout << "..................................." << endl;
        }
    }
    if(flag)
        cout << "NENHUM PRODUTO ESTA EM FALTA!" << endl;

}
void consultar(produto x[], int &i)
{
    bool flag=true;
    string ver;
    cout<<"Informe o nome do produto a ser consultado:";
    getline(cin, ver);
    fflush(stdin);
    cout << "DADOS DO PRODUTO: " << endl;
    for(int j = 0; j<=i; j++)
    {
        if(x[j].nome== ver)
        {
            flag=false;
            cout << "Codigo: " << x[j].cod << endl;
            cout << "Valor: R$" << x[j].valor << endl;
            cout << "Quantidade: " << x[j].qtd << endl;
            cout << "..................................." << endl;
        }
    }
    if(flag)
        cout << "O PRODUTO INFORMADO NAO EXISTE!" << endl;

}
void vender(produto x[], int &i)
{
    bool flag=true;
    string ver;
    int quant;
    cout<<"Informe o nome do produto a ser vendido:";
    getline(cin, ver);

    cout<<"Informe a quantidade:";
    cin>>quant;
    fflush(stdin);

    for(int j = 0; j<=i; j++)
    {
        if(x[j].nome== ver)
        {
            flag=false;
            if(quant<=x[j].qtd)
            {
                    x[j].qtd-=quant;
                cout << "PRODUTO VENDIDO!" << endl;
            }
            else
            {
                cout << "O PRODUTO NAO TEM ESTOQUE!" << endl;
            }
        }
    }
    if(flag)
        cout << "O PRODUTO INFORMADO NAO EXISTE!" << endl;

}
void gravar(produto x[], int &i)
{
    ofstream escreve;
    escreve.open("produtos.txt", ios::out);
     if(escreve.is_open())
    {
        for(int j = 0; j <= i; j++)
        {
            escreve << x[j].cod << "#" << x[j].nome << "#" << x[j].valor<<"#"<<x[j].qtd<< "#";
        }
    }
    escreve.close();
}
main()
{
    produto p[30] = {0};
    int menu=-1, ind=-1;
    carregar_dados(p, ind);
    do
    {
        system("cls");
        cout << ".......................ESTOQUE........................" << endl;
        cout << "... 0 - Sair                                       ..."<< endl;
        cout << "... 1 - Incluir um novo produto                    ..." << endl;
        cout << "... 2 - Vender produto                             ..." << endl;
        cout << "... 3 - Listar produto em estoque zerado           ..." << endl;
        cout << "... 4 - Consultar produto                          ..." << endl;
        cout << "... 5 - Listar todos os produtos                   ..." << endl;
        cout << "......................................................" << endl;
        cout << "Sua escolha: ";
        cin >> menu;
        fflush(stdin);

        switch(menu)
        {
        case 0:
                  gravar(p, ind);
            cout << "DADOS ATUALIZADOS NA AGENDA!";
            cout << "PROGRAMA FINALIZADO!";
            getchar();
            break;
        case 1:
            system("cls");
            p[ind] = ler(p, ind);
            getchar();
            break;
        case 2:
            system("cls");
            vender(p, ind);
            getchar();
            break;
        case 3:
            system("cls");
            estoque_zerado(p, ind);
            getchar();
            break;
        case 4:
            system("cls");
            consultar(p, ind);
            getchar();
            break;
        case 5:
            system("cls");
            mostra(p, ind);
            getchar();
            break;
        };
    }
    while(menu != 0);
}

