#ifndef CASA_H
#define CASA_H
#include "Imovel.hpp"
	
class Casa : public Imovel  {
	private:
		int pavimentos, quartos;
		float areaTerreno, areaConstruida;

	public:

		Casa(std::string nome);
		int getPavimentos();
		int getQuartos();
		float getAreaTerreno();
		float getAreaConstruida();
		void lerAtributos();
		void exibeAtributos();

};
#endif