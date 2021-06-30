#ifndef COMISSIONADO_H
#define COMISSIONADO_H
#include "Funcionario.hpp"
	
class Comissionado : public Funcionario{
	private:
		double vendasMensal;
		double percentualComissao;

	public:

		Comissionado();
		double calculaSalario();
		double getVendasMensal();
		double getPercentualComissao();
		void setVendasMensal(double);
		void setPercentualComissao(double);
		
};
#endif