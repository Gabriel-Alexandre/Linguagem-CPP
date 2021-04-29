#include "Data02.h"
#include <iostream>

using namespace std;

int main() {
    Data02 dat;
    int dia, mes, ano;

    cin >> dia;
    cin >> mes;
    cin >> ano;

    dat.setDia(dia);
    dat.setMes(mes);
    dat.setAno(ano);

    dat.printData();

} 