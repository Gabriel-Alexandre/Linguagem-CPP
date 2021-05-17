#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H
//Lembrar: Para o lop aceitar e recomendável usar o ifndef em vez do #pragma once
#include <string>

using namespace std;
	
class Funcionario  {
	protected:
		string matricula, nome;
		float salario;

	public:
		Funcionario();
		string getMatricula();
		string getNome();
		float getSalario();
		void setMatricula(string m);
		void setNome(string n);
		void setSalario(float s);
};
#endif