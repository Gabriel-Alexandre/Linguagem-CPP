#ifndef SISTEMAGERENCIAFOLHA_H
#define SISTEMAGERENCIAFOLHA_H
#include <vector>
#include <string>
#include "Funcionario.hpp"

using namespace std;
	
class SistemaGerenciaFolha  {
	private:
		vector<Funcionario*> funcionarios;
		double orcamentoMax;

	public:

		SistemaGerenciaFolha(double);
		void setFuncionarios(Funcionario *);
		double calculaValorTotalFolha();
		double consultaSalarioFuncionario(std::string);

};
#endif