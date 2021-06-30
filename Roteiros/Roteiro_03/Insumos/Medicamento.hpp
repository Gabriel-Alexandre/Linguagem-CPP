#ifndef MEDICAMENTO_H
#define MEDICAMENTO_H
#include "Insumo.hpp"
#include <string>
	
class Medicamento  : public Insumo
{
	private:
		std::string dosagem, administracao, disponibilizacao;

	public:

		Medicamento(std::string, std::string, std::string, int, int, int, std::string, std::string, std::string);
		~Medicamento();

};
#endif