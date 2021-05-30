#ifndef TERRERNO_H
#define TERRERNO_H
#include "Imovel.hpp"
	
class Terreno : public Imovel {
	private:
		float area;

	public:

		Terreno(std::string nome, std::string disponibilidade, float valor, float area);
		float getArea();
		void lerAtributos();
		void exibeAtributos();


};
#endif