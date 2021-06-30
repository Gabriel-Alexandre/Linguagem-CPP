#ifndef ASSALARIADO_H
#define ASSALARIADO_H
#include "Funcionario.hpp"
#include <string>
	
class Assalariado : public Funcionario{
	private:
		double salario;

	public:

		Assalariado(std::string nome, int matricula, double salario);
		double calculaSalario();

};
#endif