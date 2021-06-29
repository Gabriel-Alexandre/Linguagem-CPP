#ifndef ASSALARIADO_H
#define ASSALARIADO_H
#include "Funcionario.hpp"
	
class Assalariado : public Funcionario{
	private:
		double salario;

	public:

		Assalariado();
		double calculaSalario();
		double getSalario();
		void setSalario(double);

};
#endif