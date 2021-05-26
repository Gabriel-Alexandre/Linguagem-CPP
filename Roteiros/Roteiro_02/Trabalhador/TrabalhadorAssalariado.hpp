#ifndef TRABALHADORASSALARIADO_H
#define TRABALHADORASSALARIADO_H
#include "Trabalhador.hpp"
	
class TrabalhadorAssalariado : public Trabalhador {
	private:

	public:
		TrabalhadorAssalariado(std::string nome, float salario);
		float calcularPagamentoSemanal();
		
};
#endif