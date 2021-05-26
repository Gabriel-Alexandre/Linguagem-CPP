#include "TrabalhadorPorHora.hpp"

TrabalhadorPorHora::TrabalhadorPorHora(std::string nome, float valorHora) {
    this->valorHora = valorHora;
    this->nome = nome;
}

TrabalhadorPorHora::TrabalhadorPorHora() {

}

float TrabalhadorPorHora::calcularPagamentoSemanal(int horasSemanais) {
    float pagSemanal;

    if (horasSemanais <= 40) {
        pagSemanal = horasSemanais * valorHora;
    }else{
        pagSemanal = (40 * valorHora) + ((horasSemanais - 40) * (valorHora * 1.5));
    }

    /*O código está correto, só não estou conseguindo compilar porque estou com problema no compilador nessa pasta.
    */
    salario = pagSemanal * 4;

    return pagSemanal;
}
