#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H
#include <string>
	
class Funcionario  {
	protected:
		std::string nome;
		int matricula;

	public:

		Funcionario();
		std::string getNome();
		int getMatricula();
		void setNome(std::string);
		void setMatricula(int);
		virtual double calculaSalario() = 0;

};
#endif