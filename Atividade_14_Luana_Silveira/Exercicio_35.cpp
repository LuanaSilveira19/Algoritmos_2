#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<fstream>
using namespace std;

struct contato
{
    char nome[100];
    char num[20];
};
void carregar_dados (contato x[], int &i)
{
    char aux[100], aux2[100];
    int cont = 0, tam;
    ifstream ler("agenda.txt");
    if(ler.is_open())
    {
        ler.getline(aux, 100, ';');
        while(!ler.eof())
        {
            tam = strlen(aux);
            if(aux[0] == '\n')
            {
               for(int i = 0; i < tam; i++)
                  aux2[i] = aux[i + 1];
               strcpy(aux,aux2);
            }
            if(cont == 0)
                i++;
            cont++;
            if(cont == 1)
            {
                strcpy(x[i].nome, aux);
            }
            else if(cont == 2)
            {
                strcpy(x[i].num, aux);
                cont=0;
            }
            ler.getline(aux, 100, ';');
        }
    }
    ler.close();
}
void gravar_dados (contato x)
{
    ofstream escreve;
    escreve.open("agenda.txt", ios::app);
    if(escreve.is_open())
    {
        escreve << x.nome << ";" << x.num << ";\n";
    }
    escreve.close();
}
contato ler (contato x[], int &i)
{
    char aux[20];
    bool flag=false;
    i++;
    cout << "Informe o nome do contato: ";
    cin.getline(x[i].nome, 100);
    fflush(stdin);
    do
    {
        flag= false;
        cout << "Digite o numero do contato: ";
        cin.getline(aux, 20);
        fflush(stdin);

        for(int j=0; j<i; j++)
        {
            if(strcmp(x[j].num, aux)==0)
            {
                flag= true;
                cout<<"Esse numero ja existe!"<<endl;
                break;
            }
        }
        if(flag==false)
        {
            strcpy(x[i].num, aux);
        }


    }
    while(flag!=false);


    gravar_dados(x[i]);
    cout<<"Cadastro feito!"<<endl;
    return x[i];
}
void mostra (contato x[], int i)
{
    cout << "CONTATOS: " << endl;
    for(int j = 0; j<=i; j++)
    {
        cout << "Nome:" << x[j].nome << endl;
        cout << "Numero: " << x[j].num<< endl;
        cout << "..................................." << endl;
    }
}
void consultar(contato x[], int i)//está dando erro
{
    int cont=0;

    cout << "Nome para busca: ";
    char busca[100];
    gets(busca);
    fflush(stdin);

    for(int j=0; j<=i; j++)
    {
        if(strcmp(x[j].nome, busca) == 0)//não está funcionando
        {
            cont++;
            cout << "\n<< CONTATO ENCONTRADO! >>" << endl;
            cout << "-----------------------------------" << endl;
            cout << "Nome: " << x[j].nome << endl;
            cout << "Telefone: " << x[j].num << endl;
            cout << "-----------------------------------" << endl;
        }
    }
    if(cont==0)
    {
        cout << "\n<< CONTATO NAO ENCONTRADO! >>" << endl;

    }
}
void escreve_arquivo(contato x[], int i)
{
    ofstream arquivo("agenda.txt");
    if (!arquivo)
    {
        cout << "Erro ao abrir o arquivo para escrita." << endl;

    }
    else
    {
        for(int j = 0; j < i; j++)
        {
            arquivo << x[j].num;
            if (j != i - 1)
            {
                arquivo << ";";
            }
        }
    }


    arquivo.close();
}
void excluir (contato x[], int &i)
{
    char aux[20];

    bool flag= false;
    cout << "Digite o numero do contato: ";
    cin.getline(aux, 20);
    fflush(stdin);

    for(int j=0; j<i; j++)
    {
        if(strcmp(x[j].num, aux)==0)
        {
            flag= true;
            cout << "Número removido com sucesso!" << endl;
            for(int k=j; k<i-1; k++)
            {
                    x[k]=x[k+1];
            }
            i--;
            break;
        }
    }
    if(flag==false)
    {
        cout<<"Esse numero nao existe!"<<endl;
    }
}

void gravar(contato x[], int &i)
{
    ofstream escreve;
    escreve.open("agenda.txt", ios::out);
    if(escreve.is_open())
    {
        for(int j = 0; j <= i; j++)
        {
            if(j == 0)
                escreve << x[j].nome << ";" << x[j].num << ";";
            else
                escreve << "\n" << x[j].nome << ";" << x[j].num << ";";
        }
    }
    escreve.close();
}
main()
{

    contato p[30] = {0};
    int menu=-1, ind=-1;
    carregar_dados(p, ind);
    do
    {
        system("cls");
        cout << "..................AGENDA TELEFONICA..................." << endl;
        cout << "... 0 - Sair                                       ..."<< endl;
        cout << "... 1 - Cadastrar contato                          ..." << endl;
        cout << "... 2 - Mostrar contatos                           ..." << endl;
        cout << "... 3 - Consultar                                  ..." << endl;
        cout << "... 4 - Excluir                                    ..." << endl;
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
            p[ind] = ler(p, ind);//verificar num repetido
            getchar();
            break;
        case 2:
            system("cls");
            mostra(p, ind);
            getchar();
            break;
        case 3:
            system("cls");
            consultar(p, ind);//mostrar mais de 1
            getchar();
            break;
        case 4:
            system("cls");
            excluir(p, ind);
            getchar();
            break;
        };
    }
    while(menu != 0);

}
