#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<fstream>
#include<ctime>

using namespace std;

void escreverVetorEmArquivo(int vet[], int tam)
{
    ofstream arquivo("valores.txt");
    if (!arquivo)
    {
        cout << "Erro ao abrir o arquivo para escrita." << endl;

    }
    else
    {
        for(int i = 0; i < tam; ++i)
        {
            arquivo << vet[i];
            if (i != tam - 1)
            {
                arquivo << ",";
            }
        }
    }


    arquivo.close();
}

void mostrarVetor(int vet[], int tam)
{
    cout << "Vetor: ";
    for (int i = 0; i < tam; ++i)
    {
        cout << vet[i] << ", ";
    }
    cout << endl;
}

void geraOrdena(int vet[], int tam)
{
    int i = 0;
    bool igual;
    int aux;
    srand(time(NULL));
    while(i < tam)
    {
        aux = rand() % 500;
        if(i == 0)
        {
            vet[i] = aux;
        }
        else
        {
            igual = false;
            for(int x = 0; x < i; x++)
            {
                if(aux == vet[x])
                {
                    igual = true;
                    break;
                }
            }
            if(igual)
                i--;
            else
                vet[i]  = aux;
        }
        i++;
    }
    int emp;
    for(int i = 0; i <= tam; i++)
    {
        for(int x = i+1; x < tam; x++)
        {
            if(vet[i] > vet[x])
            {
                emp = vet[i];
                vet[i] = vet[x];
                vet[x] = emp;
            }
        }
    }
}



main()
{

    setlocale(LC_ALL, "Portuguese");
    int tam;
    bool comeca = false;
    cout << "Digite o tamanho do vetor até 100: ";
    cin >> tam;
    fflush(stdin);
    int vet[tam];
    int vetAux[tam];

    if(tam > 0 && tam < 100)
    {
        comeca = true;
        geraOrdena(vet, tam);
        escreverVetorEmArquivo(vet, tam);
    }
    else
    {
        cout << "Insira valores até 100!" << endl;
    }

    int op;
    while(comeca == true)
    {
        cout << endl;
        cout << "0- Sair " << endl;
        cout << "1- Excluir valores do vetor " << endl;
        cout << "2- Mostra vetor " << endl;
        cout << endl;
        cout << "Digite a opção que deseja: ";
        cin >> op;
        fflush(stdin);

        if(op < 0 && op > 2)
        {
            cout << "Opção inválida";
        }

        if(op == 0)
        {
            cout << "Até breve!" << endl;
            comeca = false;
            break;
        }

        if(op == 1)
        {
            mostrarVetor(vet, tam);
            int num;
            cout << "Informe o número que deseja remover: ";
            cin >> num;
            int posicao = -1;
            for(int i = 0; i < tam; i++)
            {
                if(vet[i] == num)
                {
                    posicao = i;
                }
            }

            if (posicao != -1)
            {
                for (int i = posicao; i < tam - 1; ++i)
                {
                    vet[i] = vet[i + 1];
                }
                tam--;
                escreverVetorEmArquivo(vet, tam);
                cout << endl;
                cout << "Valor removido com sucesso!" << endl;
            }
            else
            {
                cout << endl;
                cout << "Valor não encontrado no vetor." << endl;

            }

        }

        if(op == 2)
        {
            mostrarVetor(vet, tam);

        }

    }


}
