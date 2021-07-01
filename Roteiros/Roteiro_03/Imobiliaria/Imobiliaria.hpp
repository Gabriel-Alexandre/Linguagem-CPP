#ifndef IMOBILIARIA_H
#define IMOBILIARIA_H
#include "Imovel.hpp"
#include <vector>
	
class Imobiliaria  
{
	private:
		std::vector<Imovel*> imoveis;


	public:

		Imobiliaria();
		virtual ~Imobiliaria();
		void addImovel(Imovel *);
		std::string buscarImovel(std::string);

};
#endif