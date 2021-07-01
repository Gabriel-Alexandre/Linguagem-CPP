#ifndef TERRENO_H
#define TERRENO_H
#include "Imovel.hpp"
	
class Terreno  : public Imovel
{
	private:
		double areaTerreno;

	public:

		Terreno(std::string nome, std::string disponibilidade, double valorImovel,
		double areaTerreno);
		std::string exibeAtributos();
		virtual ~Terreno();

};
#endif