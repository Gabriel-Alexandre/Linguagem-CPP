#ifndef APARTAMENTO_H
#define APARTAMENTO_H
#include "Imovel.hpp"
	
class Apartamento  : public Imovel
{
	private:
		double area, condominio;
		int quartos, andar, garagem;

	public:

		Apartamento(std::string nome, std::string disponibilidade, double valorImovel,
		double area, double condominio, int quartos, int andar, int garagem);
		std::string exibeAtributos();
		virtual ~Apartamento();

};
#endif