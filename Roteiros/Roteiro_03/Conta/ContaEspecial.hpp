#ifndef CONTAESPECIAL_H
#define CONTAESPECIAL_H
#include "ContaCorrente.hpp"
	
class ContaEspecial : public ContaCorrente {
	private:

	public:

		ContaEspecial(std::string, int, double);
		double definirLimite();
};
#endif