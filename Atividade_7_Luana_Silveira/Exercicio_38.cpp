#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<cstring>

using namespace std;

#include <iostream>

using namespace std;

struct data {
    int dia;
    int mes;
    int ano;
};

void leitura(data& d) {
    cout << "Digite o dia: ";
    cin >> d.dia;
    cout << "Digite o mes: ";
    cin >> d.mes;
    cout << "Digite o ano: ";
    cin >> d.ano;
}

int diasNoMes(int mes, int ano) {
    switch (mes) {
        case 2:
            if ((ano % 4 == 0 && ano % 100 != 0) || ano % 400 == 0) {
                return 29; //ano bissexto
            } else {
                return 28; //ano nao bissexto
            }
        case 4:
        case 6:
        case 9:
        case 11:
            return 30;
        default:
            return 31;
    }
}

int calcularDias(data& d) {
    int totalDias = 0;
    for (int mes = 1; mes < d.mes; mes++) {
        totalDias += diasNoMes(mes, d.ano);
    }
    totalDias += d.dia - 1;
    int diasRestantes = 365;
    if ((d.ano % 4 == 0 && d.ano % 100 != 0) || d.ano % 400 == 0) {
        diasRestantes = 366; //ano bissexto
    }
    diasRestantes -= totalDias;
    return diasRestantes;
}

main() {
    data d;
    leitura(d);
    int diasRestantes = calcularDias(d);
    cout << "Dias restantes no ano: " << diasRestantes << endl;
    cout << "Dias passados no ano: " << 365 - diasRestantes << endl;

}
