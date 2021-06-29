#include "Comissionado.hpp"  
	
Comissionado::Comissionado() {
	vendasSemanais = 0;
    percentualComissao = 0;
}
	
double Comissionado::calculaSalario() {
    return 0;
}

double Comissionado::getVendasSemanais() {
    return vendasSemanais;
}

double Comissionado::getPercentualComissao() {
    return percentualComissao;
}

void Comissionado::setVendasSemanais(double vendasSemanais) {
    this->vendasSemanais = vendasSemanais;
}

void Comissionado::setPercentualComissao(double percentualComissao) {
    this->percentualComissao = percentualComissao;
}
