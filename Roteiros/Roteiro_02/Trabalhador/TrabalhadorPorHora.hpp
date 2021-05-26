#ifndef TRABALHADORPORHORA_H
#define TRABALHADORPORHORA_H
#include "Trabalhador.hpp"
	
class TrabalhadorPorHora : public Trabalhador {
	private:
		float valorHora;

	public:
		TrabalhadorPorHora(std::string nome, float valorHora);
		TrabalhadorPorHora();
		float calcularPagamentoSemanal(int horasSemanais);

};
#endif