#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<cstring>

using namespace std;
struct prato
{
    string ingredientes;
    string preparo;
    int calorias;
};
struct cardapio
{
    int codigo;
    string nome;
    prato x;
    float valor;
};
void incluirItem(cardapio menu[], int &n)
{

    if (n >= 20)
    {
        cout << "O cardapio está cheio. Não é possivel incluir mais itens." << endl;
        return;
    }

    cardapio novoItem;

    cout << "Digite o codigo do novo item: ";
    cin >> novoItem.codigo;
    fflush(stdin);
    cout << "Digite o nome do novo item: ";
    getline(cin, novoItem.nome);
    fflush(stdin);
    cout << "Digite os ingredientes do novo item: ";
    getline(cin, novoItem.x.ingredientes);
    fflush(stdin);
    cout << "Digite o modo de preparo do novo item: ";
    getline(cin, novoItem.x.preparo);
    fflush(stdin);
    cout << "Digite a quantidade de calorias do novo item: ";
    cin >> novoItem.x.calorias;
    fflush(stdin);
    //cin.ignore();
    cout << "Digite o valor do novo item: ";
    cin >> novoItem.valor;
    fflush(stdin);
    menu[n] = novoItem;
    n++;
    cout << "Novo item adicionado com sucesso!" << endl;
}


void mostrarCardapio(cardapio menu[], int &n)
{
    if (n == 0)
    {
        cout << "O cardapio esta vazio." << endl;
        return;
    }

    cout << "CODIGO\tNOME\t\tINGREDIENTES\t\t\tPREPARO\t\tCALORIAS\tVALOR" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << menu[i].codigo << "\t" << menu[i].nome << "\t\t" << menu[i].x.ingredientes << "\t\t" << menu[i].x.preparo << "\t\t" << menu[i].x.calorias << "\t" << menu[i].valor << endl;
        cout << "----------------------------------------------------------------------------------------------------------" << endl;

    }
}
void detalharCardapio(cardapio menu[], int n)
{
    int codigo;
    cout << "Digite o codigo do item: ";
    cin >> codigo;
    for (int i = 0; i < n; i++)
    {
        if (menu[i].codigo == codigo)
        {
            cout << "Codigo: " << menu[i].codigo << endl;
            cout << "Nome do prato: " << menu[i].nome << endl;
            cout << "Ingredientes: " << menu[i].x.ingredientes << endl;
            cout << "Modo de preparo: " << menu[i].x.preparo << endl;
            cout << "Número de calorias: " << menu[i].x.calorias << endl;
            cout << "Valor: R$" << menu[i].valor << endl;
            return;
        }
    }
    cout << "Item não encontrado." << endl;
}
void mais_caro(cardapio menu[], int n) {
    float maiorValor = -1.0;
    cardapio caro;

    for (int i = 0; i < n; i++) {
        if (menu[i].valor > maiorValor) {
            maiorValor = menu[i].valor;
            caro = menu[i];
        }
    }

    cout << "Cardapio mais caro:" << endl;
    cout << "Codigo: " <<   caro.codigo << endl;
    cout << "Nome: " <<   caro.nome << endl;
    cout << "Ingredientes: " <<   caro.x.ingredientes << endl;
    cout << "Preparo: " <<   caro.x.preparo << endl;
    cout << "Calorias: " <<   caro.x.calorias << endl;
    cout << "Valor: R$ " <<   caro.valor << endl;
}

void menor_caloria(cardapio menu[], int n) {
     int menor = 2147483647;
    cardapio cal;

    for (int i = 0; i < n; i++) {
        if (menu[i].x.calorias < menor) {
            menor = menu[i].x.calorias;
           cal = menu[i];
        }
    }
    cout << "Cardapio com a menor quantidade de calorias:" << endl;
    cout << "Codigo: " << cal.codigo << endl;
    cout << "Nome: " << cal.nome << endl;
    cout << "Ingredientes: " << cal.x.ingredientes << endl;
    cout << "Preparo: " << cal.x.preparo << endl;
    cout << "Calorias: " << cal.x.calorias << endl;
    cout << "Valor: R$ " << cal.valor << endl;
}

main()
{
    setlocale(LC_ALL, "Portuguese");

    cardapio menu[20];
    int op = -1, cont=0, n=0;

    do
    {
        system("cls");
        cout << "-------------------------------------------------------------------" << endl;
        cout << "-------------------------------CARDÁPIO----------------------------" << endl;
        cout << "------- 1 Incluir                                             -----" << endl;
        cout << "------- 2 Mostrar cardápio                                    -----" << endl;
        cout << "------- 3 Detalhar cardápio                                   -----" << endl;
        cout << "------- 4 Mostrar cardápio mais caro                          -----" << endl;
        cout << "------- 5 Mostrar cardápio com a menor quantidade de calorias -----" << endl;
        cout << "------- 0 - Sair                                              -----" << endl;
        cout << "-------------------------------------------------------------------" << endl;
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
            cont++;
            incluirItem(menu,n);
            getchar();
            break;

        case 2:
            system("cls");
            mostrarCardapio(menu,n);
            system("pause");
            break;
        case 3:
            system("cls");
            detalharCardapio(menu,n);
            system("pause");
            break;
        case 4:
            system("cls");
            mais_caro(menu,n);
            system("pause");
            break;
         case 5:
            system("cls");
                menor_caloria(menu,n);
            system("pause");
            break;

        }///////

    }
    while (op != 0);

}


