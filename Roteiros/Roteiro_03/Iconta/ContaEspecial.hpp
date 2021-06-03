#ifndef CONTAESPECIAL_H
#define CONTAESPECIAL_H
#include "Conta.hpp"
	
class ContaEspecial : public Conta {
	private:

	public:

		ContaEspecial(std::string, int, double);
		void defineLimite();

};
#endif