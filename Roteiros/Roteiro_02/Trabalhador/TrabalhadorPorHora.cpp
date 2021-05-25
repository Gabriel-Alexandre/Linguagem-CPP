#include "TrabalhadorPorHora.hpp"  

TrabalhadorPorHora::TrabalhadorPorHora() {
}

TrabalhadorPorHora::TrabalhadorPorHora(float valorHora) {
	this->valorHora = valorHora;
}

float TrabalhadorPorHora::calcularPagamentoSemanal(int horasSemanais) {
    float pagSemanal;

    pagSemanal = horasSemanais * valorHora;
    this->salario = pagSemanal * 4;
    //Talvez esteja faltando o último quisito dessa classe

    return pagSemanal;
}
