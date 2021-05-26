#ifndef TRABALHADORASSALARIADO_H
#define TRABALHADORASSALARIADO_H
#include "Trabalhador.hpp"
	
class TrabalhadorAssalariado : public Trabalhador {
	private:

	public:
		TrabalhadorAssalariado();
		void setSalario(float salario);
		float getSalario();
		float calcularPagamentoSemanal();
};
#endif