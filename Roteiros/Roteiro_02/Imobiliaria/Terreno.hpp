#ifndef TERRERNO_H
#define TERRERNO_H
#include "Imovel.hpp"
	
class Terreno : public Imovel {
	private:
		float area;

	public:

		Terreno(std::string nome);
		void lerAtributos();
		void exibeAtributos();


};
#endif