#ifndef CONTA_H
#define CONTA_H
#include <string>
	
class Conta {
	protected:
	
		std::string nomeCliente;
		int numeroConta;
		double saldo;

	public:

		Conta(std::string, int);
		std::string getNomeCliente();
		int getNumeroConta();
		std::string getSaldo();
		void sacar(double);
		void depositar(double);
		

};
#endif