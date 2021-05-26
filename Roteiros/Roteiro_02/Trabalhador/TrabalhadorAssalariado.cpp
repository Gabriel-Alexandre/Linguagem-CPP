#include "TrabalhadorAssalariado.hpp"  

TrabalhadorAssalariado::TrabalhadorAssalariado(std::string nome, float salario) {
	this->salario = salario;
    this->nome = nome;
}

float TrabalhadorAssalariado::calcularPagamentoSemanal() {
    return salario / 4;
}
	