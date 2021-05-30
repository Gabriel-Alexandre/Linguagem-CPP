#ifndef CASA_H
#define CASA_H
#include "Imovel.hpp"
	
class Casa : public Imovel  {
	private:
		int pavimentos, quartos;
		float areaTerreno, areaConstruida;

	public:

		Casa(std::string nome);
		void lerAtributos();
		void exibeAtributos();

};
#endif