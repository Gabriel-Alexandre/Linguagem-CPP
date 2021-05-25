#ifndef TRABALHADORPORHORA_H
#define TRABALHADORPORHORA_H
#include "Trabalhador.hpp"
	
class TrabalhadorPorHora : public Trabalhador {
	private:
		float valorHora;

	public:
		TrabalhadorPorHora();
		TrabalhadorPorHora(float valorHora);
		float calcularPagamentoSemanal(int horasSemanais);

};
#endif