#ifndef APARTAMENTO_H
#define APARTAMENTO_H
#include "Imovel.hpp"
	
class Apartamento : public Imovel {
	private:
		int quartos, andar, garagem;
		float area, condominio;

	public:

		Apartamento(std::string nome);
		void lerAtributos();
		void exibeAtributos();

};
#endif