#ifndef SISTEMAGERENCIAFOLHA_H
#define SISTEMAGERENCIAFOLHA_H
#include <vector>
#include <string>
#include "Funcionario.hpp"

using namespace std;
	
class SistemaGerenciaFolha  {
	private:
		vector<Funcionario*> funcionarios;

	public:

		SistemaGerenciaFolha();
		void setFuncionarios(Funcionario *);
		double calculaValorTotalFolha();
		double consultaSalarioFuncionario(std::string);

};
#endif