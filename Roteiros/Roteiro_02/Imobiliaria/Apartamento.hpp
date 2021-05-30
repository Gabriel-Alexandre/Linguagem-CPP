#ifndef APARTAMENTO_H
#define APARTAMENTO_H
#include "Imovel.hpp"
	
class Apartamento : public Imovel {
	private:
		int quartos, andar, garagem;
		float area, condominio;

	public:

		Apartamento(std::string nome, std::string disponibilidade, float valor, int quartos, int andar, int garagem, float area, float condominio);
		int getQuartos();
		int getAndar();
		int getGaragem();
		float getArea();
		float getCondominio();
		void lerAtributos();
		void exibeAtributos();

};
#endif