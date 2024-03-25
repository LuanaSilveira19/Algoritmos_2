#include <iostream>
#include <string>

using namespace std;

struct Mes {
    int numero;
    string nome;
    string abreviatura;
    int dias;
};

bool bissexto(int ano) {
    return (ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0);
}

int totalDias(int dia, int mes, int ano) {
    int dias_mes[12] = {31, 28 + bissexto(ano), 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int total = 0;
    for (int i = 1; i < mes; i++) {
        if (i < 1 || i > 12) {
            cout << "Mês inválido" << endl;
            return -1;
        }
        total += dias_mes[i-1];
    }
    if (dia < 1 || dia > dias_mes[mes-1]) {
        cout << "Dia inválido" << endl;
        return -1;
    }
    total += dia;
    return total;
}

int main()
{

    setlocale(LC_ALL, "Portuguese");
    Mes meses[12] = {
        {1, "Janeiro", "Jan", 31},
        {2, "Fevereiro", "Fev", 28},
        {3, "Março", "Mar", 31},
        {4, "Abril", "Abr", 30},
        {5, "Maio", "Mai", 31},
        {6, "Junho", "Jun", 30},
        {7, "Julho", "Jul", 31},
        {8, "Agosto", "Ago", 31},
        {9, "Setembro", "Set", 30},
        {10, "Outubro", "Out", 31},
        {11, "Novembro", "Nov", 30},
        {12, "Dezembro", "Dez", 31}
    };

    int dia, mes;
    bool  valida=true;

    do{
              cout << "Digite o dia atual (1-31): ";
    cin >> dia;
    cout << "Digite o mês atual (1-12): ";
    cin >> mes;
    if(dia<1 || dia>31)
    {
        cout<<"Valor do dia inválido. "<<endl;
        valida=false;
    }
    if(mes<1 || mes>12)
    {
        cout<<"Valor do mes inválido. "<<endl;
        valida=false;
    }
    }while(valida==false);

    int ano_atual = 2023;

    int total = totalDias(dia, mes, ano_atual);
    if (total != -1) {
        cout << "Total de dias já transcorridos no corrente ano: " << total << endl;
        cout << "Data informada: " << dia << "/" << mes<< "/" <<ano_atual << endl;
        cout << "Mês: " << meses[mes-1].nome << " (" << meses[mes-1].abreviatura << "), " << meses[mes-1].dias << " dias" << endl;
    }

    return 0;
}
