#ifndef POUPANCA_H
#define POUPANCA_H
#include "Conta.hpp"
	
class Poupanca : public Conta {
	private:

		int variacao;
		double taxaRendimento;

	public:

		Poupanca(std::string, int);
		double reder();
		

};
#endif