#ifndef TRABALHADORPORHORA_H
#define TRABALHADORPORHORA_H
#include "Trabalhador.hpp"
	
class TrabalhadorPorHora : public Trabalhador {
	private:
		float valorHora;
		float pagSemanal;

	public:
		TrabalhadorPorHora();
		void setSalario(float valorHora);
		float getSalario();
		float calcularPagamentoSemanal(int horasSemanais);

};
#endif