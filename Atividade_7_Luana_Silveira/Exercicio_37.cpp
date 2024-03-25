#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<cstring>

using namespace std;
struct hora
{
    int horas;
    int minutos;
    int segundos;
};

void diferencaSegundos(hora& dif, int seg1, int seg2)
{
    int difSeg = fabs(seg1 - seg2);//pega o valor absoluto caso o primeiro seja menor
    dif.horas = difSeg / 3600;
    difSeg %= 3600;
    dif.minutos = difSeg / 60;
    dif.segundos = difSeg % 60;
}

main()
{
    char op;
    do
    {
        int seg1, seg2;
        hora dif;
        cout << "Digite o primeiro valor em segundos: ";
        cin >> seg1;
        cout << "Digite o segundo valor em segundos: ";
        cin >> seg2;
        diferencaSegundos(dif, seg1, seg2);
        cout << "Diferenca: " << dif.horas << ":" << dif.minutos << ":" << dif.segundos << endl;
        cout << "Deseja verificar outros valores? (S/N) ";
        cin >> op;
    }
    while (op != 'N' && op != 'n');

}

