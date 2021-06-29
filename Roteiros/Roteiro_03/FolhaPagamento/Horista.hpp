#ifndef HORISTA_H
#define HORISTA_H
#include "Funcionario.hpp"
	
class Horista : public Funcionario {
	private:

		double salarioPorHora;
		double horasTrabalhadas;

	public:

		Horista();
		double calculaSalario();
		double getSalarioPorHora();
		double getHorasTrabalhadas();
		void setSalarioPorHora(double);
		void setHorasTrabalhadas(double);

};
#endif