#ifndef EPI_H
#define EPI_H
#include "Insumo.hpp"
#include <string>
	
class Epi  : public Insumo
{
	private:
		std::string descricao;
		int tipo;

	public:

		Epi(std::string, std::string, std::string, int, int, int, std::string, int);
		virtual ~Epi();

};
#endif