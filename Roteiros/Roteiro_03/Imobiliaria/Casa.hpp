#ifndef CASA_H
#define CASA_H
#include "Imovel.hpp"
	
class Casa  : public Imovel
{
	private:
		int pavimentos, quartos;
		double areaTerreno, areaConstruida;

	public:

		Casa(std::string nome, std::string disponibilidade, double valorImovel,
		int pavimentos, int quartos, double areaTerreno, double areaConstruida);
		std::string exibeAtributos();
		virtual ~Casa();

};
#endif