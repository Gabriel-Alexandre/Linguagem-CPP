#include "Comissionado.hpp"  
	
Comissionado::Comissionado() {
	vendasMensal = 0;
    percentualComissao = 0;
}
	
double Comissionado::calculaSalario() {
    return vendasMensal * percentualComissao;
}

double Comissionado::getVendasMensal() {
    return vendasMensal;
}

double Comissionado::getPercentualComissao() {
    return percentualComissao;
}

void Comissionado::setVendasMensal(double vendasMensal) {
    this->vendasMensal = vendasMensal;
}

void Comissionado::setPercentualComissao(double percentualComissao) {
    this->percentualComissao = percentualComissao;
}
