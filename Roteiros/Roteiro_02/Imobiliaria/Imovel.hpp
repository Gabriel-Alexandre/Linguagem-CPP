#ifndef IMOVEL_H
#define IMOVEL_H
#include <string>
#include <iostream>

using namespace std;
	
class Imovel  {
	protected:
		std::string nome, disponibilidade;
		float valor;

	public:

		Imovel(std::string nome);
		void lerAtributos();
		void exibeAtributos();

};
#endif