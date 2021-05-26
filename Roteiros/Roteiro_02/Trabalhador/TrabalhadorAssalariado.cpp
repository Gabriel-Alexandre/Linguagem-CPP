#include "TrabalhadorAssalariado.hpp"  

TrabalhadorAssalariado::TrabalhadorAssalariado() {
	
}

void TrabalhadorAssalariado::setSalario(float salario) {
    this->salario = salario;
}

float TrabalhadorAssalariado::getSalario() {
    return salario;
}

float TrabalhadorAssalariado::calcularPagamentoSemanal() {
    return salario / 4;
}
	