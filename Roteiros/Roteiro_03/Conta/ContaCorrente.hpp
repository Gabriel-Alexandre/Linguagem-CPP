#ifndef CONTACORRENTE_H
#define CONTACORRENTE_H
#include "Conta.hpp"
	
class ContaCorrente : public Conta {
	protected:

		double limite;
		double salario;

	public:

		ContaCorrente(std::string, int, double);
		double getSalario();
		double definirLimite();

};
#endif