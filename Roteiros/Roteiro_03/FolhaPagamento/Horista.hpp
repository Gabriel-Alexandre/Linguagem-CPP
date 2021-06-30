#ifndef HORISTA_H
#define HORISTA_H
#include "Funcionario.hpp"
#include <string>
	
class Horista : public Funcionario {
	private:

		double salarioPorHora;
		double horasTrabalhadas;

	public:

		Horista(std::string nome, int matricula, double salarioPorHora, double horasTrabalhadas);
		double calculaSalario();

};
#endif