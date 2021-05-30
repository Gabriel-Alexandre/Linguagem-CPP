#ifndef CASA_H
#define CASA_H
#include "Imovel.hpp"
	
class Casa : public Imovel  {
	private:
		int pavimentos, quartos;
		float areaTerreno, areaConstruida;

	public:

		Casa(std::string nome, std::string disponibilidade, float valor, int pavimentos, int quartos, float areaTerreno, float areaConstruida);
		int getPavimentos();
		int getQuartos();
		float getAreaTerreno();
		float getAreaConstruida();
		void lerAtributos();
		void exibeAtributos();

};
#endif