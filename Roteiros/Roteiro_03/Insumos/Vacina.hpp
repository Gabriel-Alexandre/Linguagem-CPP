#ifndef VACINA_H
#define VACINA_H
#include "Insumo.hpp"
	
class Vacina  : public Insumo
{
	private:
		int tipo, quantidadeDoses, intervalo;

	public:

		Vacina(std::string, std::string, std::string, int, int, int, int, int, int);
		~Vacina();

};
#endif