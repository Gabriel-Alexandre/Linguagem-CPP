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
		void setNome(std::string nome);
		virtual void setSalario(float salario);
		virtual float getSalario();
		virtual float calcularPagamentoSemanal();
		virtual float calcularPagamentoSemanal(int);

};
#endif