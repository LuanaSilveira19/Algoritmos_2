#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<fstream>
#include<ctime>

using namespace std;
struct cadastro
{
    char nome[100];
    float n1;
    float n2;
    float n3;
};
void carregar_dados (cadastro x[], int &i)
{
    char aux[100];
    int cont = 0;
    ifstream ler("Notas.txt");
    if(ler.is_open())
    {
        ler.getline(aux, 100, ',');
        while(!ler.fail())
        {
            if(cont == 0)
                i++;
            cont++;
            if(cont == 1)
            {
                strcpy(x[i].nome, aux);
            }
            else if(cont == 2)
            {
                x[i].n1 = atof(aux);
            }
            else if(cont == 3)
            {
                x[i].n2 = atof(aux);
            }
            else if(cont == 4)
            {
                x[i].n3 = atof(aux);
                cont = 0;
            }
            ler.getline(aux, 100, ',');
        }
    }
    ler.close();
}
void aprovado(cadastro x[], int i)
{
    float soma=0, media;
    int aprovado=0, reprovado=0, total=0;
    for(int j = 0; j <i; j++)
    {
        soma=x[j].n1+x[j].n2+x[j].n3;
        media=soma/3;
        total++;
        if(media>=6)
        {
            aprovado++;
        }
        else
            reprovado++;
        soma=0;
    }
    cout<<"Percentual de alunos aprovados:"<<((aprovado*100.0)/total)<<"%"<<endl;
    cout<<"Percentual de alunos reprovados:"<<((reprovado*100.0)/total)<<"%"<<endl;
}
void turma(cadastro x[], int i)
{
    float soma_total=0, media_turma=0;
    float menor=10000, maior=0;
    int total=0;
    for(int j = 0; j <i; j++)
    {
        soma_total+=x[j].n1+x[j].n2+x[j].n3;
        total++;
    }
    for(int j = 0; j <i; j++)
    {
        if(x[j].n1>maior)
            maior=x[j].n1;
        if(x[j].n2>maior)
            maior=x[j].n2;
        if(x[j].n3>maior)
            maior=x[j].n3;

        if(x[j].n1<menor)
            menor=x[j].n1;
        if(x[j].n2<menor)
            menor=x[j].n2;
        if(x[j].n3<menor)
            menor=x[j].n3;
    }
    media_turma=soma_total/(total*3);
    cout<<"Maior nota: "<<maior<<endl;
    cout<<"Menor: "<<menor<<endl;
    cout<<"Media da turma: "<<media_turma<<endl;

}
void gravar_dados (cadastro x)
{
    ofstream escreve;
    escreve.open("Notas.txt", ios::app);
    if(escreve.is_open())
    {
            escreve << x.nome << "," << x.n1 << "," <<x.n2 << ","<<x.n3 << ","<<endl;
    }
    escreve.close();
}
cadastro ler (cadastro x[], int &i)
{
    i++;
    cout << "Informe o nome do aluno: ";
    cin.getline(x[i].nome, 100);
    fflush(stdin);
    cout << "Digite a nota 1: ";
    cin >> x[i].n1;
    fflush(stdin);

    cout << "Digite a nota 2: ";
    cin >> x[i].n2;
    fflush(stdin);

    cout << "Digite a nota 3: ";
    cin >> x[i].n3;
    fflush(stdin);

    gravar_dados(x[i]);
    return x[i];
}
void mostra (cadastro x[], int i)
{
    float soma=0;
    cout << "DADOS INFORMADOS: " << endl;
    for(int j = 0; j<i; j++)
    {
        soma=x[j].n1+x[j].n2+x[j].n3;
        cout << "Nome: " << x[j].nome << endl;
        cout << "Nota 1: " << x[j].n1 << endl;
        cout << "Nota 2: " << x[j].n2 << endl;
        cout << "Nota 3: " << x[j].n3 << endl;
        cout << "Media: " << soma/3 << endl;
        cout << "..................................." << endl;
        soma=0;
    }
}
main()
{
    cadastro cad[30] = {0};
    int menu=-1, ind=-1;
    carregar_dados(cad, ind);
    do
    {
        system("cls");
        cout << ".........................NOTAS........................" << endl;
        cout << "... 0 - Sair                                       ..."<< endl;
        cout << "... 1 - Cadastrar aluno                            ..." << endl;
        cout << "... 2 - Media aritmetica                           ..." << endl;
        cout << "... 3 - Mostrar a maior, menor e a media da turma  ..." << endl;
        cout << "... 4 - Percentual de aprovados                    ..." << endl;
        cout << "......................................................" << endl;
        cout << "Sua escolha: ";
        cin >> menu;
        fflush(stdin);

        switch(menu)
        {
        case 0:

            cout << "DADOS ATUALIZADOS NO ARQUIVO TEXTO!";
            cout << "PROGRAMA FINALIZADO!";
            getchar();
            break;
        case 1:
            system("cls");
            cad[ind] = ler(cad, ind);
            cout<<"Aluno cadastrado!";
            getchar();
            break;
        case 2:
            system("cls");
            if(ind < 0)
                cout << "NAO EXISTE NENHUM CADASTRO ATUALMENTE!";
            else{
                mostra(cad, ind);
            }
            getchar();
            break;
        case 3:
            system("cls");
            if(ind < 0)
                cout << "NAO EXISTE NENHUM CADASTRO ATUALMENTE!";
            else
                turma(cad, ind);
            getchar();
            break;
        case 4:
            system("cls");
            if(ind < 0)
                cout << "NAO EXISTE NENHUM CADASTRO ATUALMENTE!";
            else
                aprovado(cad, ind);
            getchar();
            break;
        };
    }
    while(menu != 0);
}
