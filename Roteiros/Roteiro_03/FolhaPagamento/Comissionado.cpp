#include "Comissionado.hpp"  
	
Comissionado::Comissionado(std::string nome, int matricula, double vendasMensal, double percentualComissao) :
    Funcionario(nome, matricula)
{
	this->vendasMensal = vendasMensal;
    this->percentualComissao = percentualComissao;
}
	
double Comissionado::calculaSalario() {
    return vendasMensal * percentualComissao;
}

