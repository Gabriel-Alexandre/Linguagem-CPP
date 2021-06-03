#ifndef CONTA_H
#define CONTA_H
#include <string>
#include "Iconta.hpp"
	
class Conta : public Iconta {
	protected:
		std::string nomeCliente;
		int numeroConta;
		double salarioMensal, saldo, limite;

	public:

		Conta(std::string, int, double);
		virtual void defineLimite();
		void sacar(double valor);
		void depositar(double valor);
		double saldoTotalDisponivel();
		std::string getNomeCliente();
		int getNumeroConta();
		double getSalarioMensal();

};
#endif