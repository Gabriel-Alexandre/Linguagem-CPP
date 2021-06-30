#ifndef COMISSIONADO_H
#define COMISSIONADO_H
#include "Funcionario.hpp"
#include <string>
	
class Comissionado : public Funcionario{
	private:
		double vendasMensal;
		double percentualComissao;

	public:

		Comissionado(std::string nome, int matricula, double vendasMensal, double percentualComissao);
		double calculaSalario();
		
};
#endif