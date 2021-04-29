#include "Data03.h"
#include "iostream"
#include <string>

using namespace std;

int main() {
    int dia, mes, ano, avancaDia;
    Data03 data;

    cin >> dia;
    cin >> mes;
    cin >> ano;
    cin >> avancaDia;

    //Se ligar na ordem de setar as variáveis

    data.setAno(ano);
    data.setMes(mes);
    data.setDia(dia);
    data.setAvancarDia(avancaDia);
    data.avancar();

    cout << data.getDia() << "/" << data.getMes() << "/" << data.getAno() << endl;
}