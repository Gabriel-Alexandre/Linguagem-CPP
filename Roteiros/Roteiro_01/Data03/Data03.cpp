#include "DATA03.h"
#include <iostream>
#include <string>

using namespace std;

Data03::Data03() {
    dia = 1;
    mes = 1;
    ano = 1;
}

int Data03::getDiaMes(int m){
    switch (m) {
    case 1:
        return 31;
        break;
    case 2:
        return 28;
        break;
    case 3:
        return 31;
        break;
    case 4:
        return 30;
        break;
    case 5:
        return 31;
        break;
    case 6:
        return 30;
        break;
    case 7:
        return 31;
        break;
    case 8:
        return 31;
        break;
    case 9:
        return 30;
        break;
    case 10:
        return 31;
        break;
    case 11:
        return 30;
        break;
    case 12:
        return 31;
        break;
    default:
        return 40;
        break;
    }
}

void Data03::avancar() {
    for(int i = 0; i < avancarDia; i++) {
        dia++;

        if(dia > getDiaMes(mes)) {
            dia = 1;
            mes++;
        }
        if(mes > 12) {
            dia = 1;
            mes = 1;
            ano++;
        }
    }
}

int Data03::getAvancarDia() {
    return avancarDia;
}

string Data03::getDia() {
    string d;
    if (dia >= 0 && dia < 10) {
        d = to_string(0) + to_string(dia);
        return d;
    }
    return to_string(dia);
}

string Data03::getMes() {
    string m;
    if (mes >= 0 && mes < 10) {
        m = to_string(0) + to_string(mes);
        return m;
    }
    return to_string(mes);
}

int Data03::getAno() {
    return ano;
}

void Data03::setAvancarDia(int a) {
    avancarDia = a;
}

void Data03::setDia(int d) {
    if(d > getDiaMes(mes)) {
        cout << "Atributo dia Invalido" << endl;
        dia = 1;
    }
    else {
        dia = d;
    }
}

void Data03::setMes(int m) {
    if(m > 12) {
        cout << "Atributo mes Invalido" << endl;
        mes = 1;
    }
    else {
        mes = m;
    }
}

void Data03::setAno(int a) {
    ano = a;
}