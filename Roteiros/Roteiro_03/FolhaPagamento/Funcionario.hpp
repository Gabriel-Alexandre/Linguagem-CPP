#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H
#include <string>
	
class Funcionario  {
	protected:
		std::string nome;
		int matricula;

	public:

		Funcionario(std::string nome, int matricula);
		std::string getNome();
		virtual double calculaSalario() = 0;

};
#endif