#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<cstring>

using namespace std;
struct Habitantes
{
    int idade;
    char sexo;
    float salario;
    int numFilhos;
};

void cadastrarPessoa(Habitantes v[], int &i)
{

    i++;
    cout << "----------------PESQUISA IBGE-----------------" << endl;
    cout << "Digite a idade: ";
    cin >> v[i].idade;
    fflush(stdin);
    cout << "Digite o sexo (M ou F): ";
    cin >> v[i].sexo;
    fflush(stdin);
    cout << "Digite o salário: ";
    cin >> v[i].salario;
    fflush(stdin);
    cout << "Digite o número de filhos: ";
    cin >> v[i].numFilhos;
    fflush(stdin);

    cout << "Pessoa cadastrada com sucesso!" << endl;

    if (i>= 10)
    {
        cout << "Limite máximo de habitantes registrados atingido!" << endl;
        return;
    }
}

void mostra(Habitantes v[], int qtd )
{
    for (int i = 0; i <qtd; i++) //da erro
    {
        cout << "idade: " << v[i].idade << endl;
        cout << "sexo: " << v[i].sexo << endl;
        cout << "salario: " << v[i].salario<< endl;
        cout << "filhos: " << v[i].numFilhos << endl;
        cout << "--------------------------------" << endl;
    }
}
void m_sal_masc(Habitantes v[], int i)
{
    float soma_salarios_m = 0;
    int num_homens = 0;
    float media_salario_m=0;

    for(int i=0; i<10; i++)
    {
        if(v[i].sexo=='M')
        {
            soma_salarios_m += v[i].salario;
            num_homens++;
        }

    }
    if( num_homens>0)
    {
        cout<<soma_salarios_m / num_homens;//DA ERRO SOMENTE COM 600 E 500, MOSTRA A MEDIA DE 550 E É 850
    }
    else
    {
        cout<<media_salario_m;
    }
}
void m_sal_fem(Habitantes v[], int i)
{
    float soma_salarios_f = 0;
    int num_mulheres = 0;
    float media_salario_f=0;

    for(int i=0; i<10; i++)
    {
        if(v[i].sexo=='F')
        {
            soma_salarios_f += v[i].salario;
            num_mulheres++;
        }

    }
    if( num_mulheres>0)
    {
        cout<<soma_salarios_f / num_mulheres;
    }
    else
    {
        cout<<media_salario_f;
    }


}
void sex_sal_maior(Habitantes v[])
{
    int maiorIdade = -1;
    int indiceMaisVelha = -1;
    for (int i = 0; i < 10; i++)
    {
        if (v[i].idade > maiorIdade)
        {
            maiorIdade = v[i].idade;
            indiceMaisVelha=i;
        }
    }
    if (indiceMaisVelha != -1)
    {
        cout << "A pessoa mais velha tem " << v[indiceMaisVelha].idade << " anos, é do sexo ";
        if (v[indiceMaisVelha].sexo == 'M')
        {
            cout << "masculino";
        }
        else
        {
            cout << "feminino";
        }
        cout << " e tem um salário de R$" << v[indiceMaisVelha].salario << "." << endl;
    }
    else
    {
        cout << "Nenhuma pessoa cadastrada." << endl;
    }
}

void maior_idade(Habitantes v[], int i)
{
    int maior_idade=0;
    float salario_maior_idade = 0;
    char sexo_maior_idade = ' ';
    for (int a = 0; a <=i ; a++)
    {
        if (v[a].idade > maior_idade)
        {
            maior_idade = v[a].idade;
            salario_maior_idade = v[a].salario;
            sexo_maior_idade = v[a].sexo;
        }
    }
     cout<<"A idade da pessoa mais velha é "<<maior_idade<<" anos, é do sexo "<<sexo_maior_idade;
            cout<<" e tem o salario de R$ "<<  salario_maior_idade<<endl;
}
void menor_idade(Habitantes v[], int i)
{
    int menor_idade=v[0].idade;
    float salario_menor_idade = 0;
    char sexo_menor_idade = ' ';
    for (int a = 0; a <=i ; a++)
    {
        if (v[a].idade <= menor_idade)
        {
            menor_idade = v[a].idade;
            salario_menor_idade = v[a].salario;
            sexo_menor_idade = v[a].sexo;
        }
    }
     cout<<"A idade da pessoa mais nova é "<<menor_idade<<" anos, é do sexo "<<sexo_menor_idade;
    cout<<" e tem o salario de R$ "<<  salario_menor_idade<<endl;
}
void  qtd_filhos(Habitantes v[], int i)
{
    int filhos=0;
    float salario_f = 0;
    for (int a = 0; a <=i ; a++)
    {
        if (v[a].numFilhos > filhos)
        {
            filhos= v[a].numFilhos;
            salario_f = v[a].salario;
        }
    }
     cout<<"O maior número de filhos é "<<filhos<<", o salario do responsável é de R$ "<<salario_f<<endl;
}
main()
{
    setlocale(LC_ALL, "Portuguese");
    Habitantes v[10];
    int op = -1, i=-1;

    do
    {
        system("cls");
        cout << "-----------------------------------------------------------------" << endl;
        cout << "----------------------------PESQUISA IBGE------------------------" << endl;
        cout << "------- 1 Cadastrar Pessoas.                                -----" << endl;
        cout << "------- 2 Média de salário das pessoas do sexo Masculino.   -----" << endl;
        cout << "------- 3 Média de salário das pessoas do sexo Feminino.    -----" << endl;
        cout << "------- 4 Sexo e salário da pessoa com a maior idade.       -----" << endl;
        cout << "------- 5 Sexo e salário da pessoa com menor idade.         -----" << endl;
        cout << "------- 6 Salário da pessoa com o maior número de filhos.   -----" << endl;
        cout << "------- 0 Sair.                                             -----" << endl;
        cout << "------------------------------------------------------------------" << endl;
        cout << "Sua escolha: ";
        cin >> op;
        fflush(stdin);
        switch(op)
        {
        case 0:
            system("cls");
            cout << "Programa finalizado!";
            getchar();
            break;
        case 1:
            system("cls");
            cadastrarPessoa(v,i);
            getchar();
            break;

        case 2:
            system("cls");
            cout<<"A média total dos salários masculinos são de: R$ ";
            m_sal_masc(v,i);
            cout<<endl;
            system("pause");
            break;
        case 3:
            system("cls");
            cout<<"A média total dos salários femininos são de: R$ ";
            m_sal_fem(v,i);
            cout<<endl;
            system("pause");
            break;
        case 4:
            system("cls");
            maior_idade(v,i);
            system("pause");
            break;
        case 5:
             system("cls");
            menor_idade(v,i);
            system("pause");
            break;
        case 6:
             system("cls");
             qtd_filhos(v,i);
            system("pause");
            break;
        default:
            cout << "Opção inválida!" << endl;
            system("pause");
            break;

        }

    }
    while (op != 0);

}


