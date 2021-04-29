#include "Data02.h"
#include <iostream>

using namespace std;

Data02::Data02() {
    dia = 1;
    mes = 1;
    ano = 1;
}

void Data02::printData(){
    string messes[13] = {"Indefindo", "Janeiro", "Fevereiro", "Março", "Abril", "Maio",
                        "Junho", "Junlho", "Agosto", "Setembro", "Outubro", 
                        "Novembro", "Dezembro"};

    if(mes > 0 && mes < 13) {
        cout << dia << " de " << messes[mes] << " de " << ano << endl;
    }
    else {
        cout << dia << " de " << messes[0] << " de " << ano << endl;
    }
}

int Data02::getDia() {
    return dia;
}

int Data02::getMes() {
    return mes;
}

int Data02::getAno() {
    return ano;
}

void Data02::setDia(int d) {
    dia = d;
}

void Data02::setMes(int m) {
    mes = m;
}

void Data02::setAno(int a) {
    ano = a;
}
