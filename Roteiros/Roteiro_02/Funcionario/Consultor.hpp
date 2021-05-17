#pragma once
#include "Funcionario.hpp"
	
class Consultor : public Funcionario  {
	private:

	public:
		Consultor();
		float getSalario();
		float getSalario(float p);
};