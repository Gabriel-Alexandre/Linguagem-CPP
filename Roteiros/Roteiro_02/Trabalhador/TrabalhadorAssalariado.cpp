#include "TrabalhadorAssalariado.hpp"  

TrabalhadorAssalariado::TrabalhadorAssalariado() {
	
}

TrabalhadorAssalariado::TrabalhadorAssalariado(float salario) {
	this->salario = salario;
}

float TrabalhadorAssalariado::calcularPagamentoSemanal() {
    return salario / 4;
}
	