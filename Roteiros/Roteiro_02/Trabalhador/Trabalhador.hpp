#ifndef TRABALHADOR_H
#define TRABALHADOR_H
#include <string>
	
class Trabalhador  {
	protected:
		std::string nome;
		float salario;

	public:

		Trabalhador();
		std::string getNome();
		float getSalario();
		void setNome(std::string nome);
		void setSalario(float salario);
		virtual float calcularPagamentoSemanal();
		virtual float calcularPagamentoSemanal(int);

};
#endif