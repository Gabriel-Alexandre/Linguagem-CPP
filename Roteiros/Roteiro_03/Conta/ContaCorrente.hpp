#ifndef CONTACORRENTE_H
#define CONTACORRENTE_H
#include "Conta.hpp"
#include <string>
	
class ContaCorrente : public Conta {
	protected:

		double limite;
		double salario;

	public:

		ContaCorrente(std::string, int, double);
		double getSalario();
		double definirLimite();
		std::string getSaldo();

};
#endif