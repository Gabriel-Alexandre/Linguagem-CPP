#include "TrabalhadorPorHora.hpp"
#include <iostream>

using namespace std;

TrabalhadorPorHora::TrabalhadorPorHora() {
}

void TrabalhadorPorHora::setSalario(float valorHora) {
    this->valorHora = valorHora;
}

float TrabalhadorPorHora::getSalario() {
    return salario;
}

float TrabalhadorPorHora::calcularPagamentoSemanal(int horasSemanais) {

    this->pagSemanal = horasSemanais * valorHora;
    this->salario = pagSemanal * 4;

    cout << "S: " << salario << " P: " << pagSemanal << endl;

    return this->pagSemanal;
}
