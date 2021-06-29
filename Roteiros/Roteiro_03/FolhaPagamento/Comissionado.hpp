#ifndef COMISSIONADO_H
#define COMISSIONADO_H
#include "Funcionario.hpp"
	
class Comissionado : public Funcionario{
	private:
		double vendasSemanais;
		double percentualComissao;

	public:

		Comissionado();
		double calculaSalario();
		double getVendasSemanais();
		double getPercentualComissao();
		void setVendasSemanais(double);
		void setPercentualComissao(double);
		
};
#endif