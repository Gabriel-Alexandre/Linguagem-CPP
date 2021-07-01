#include "Imobiliaria.hpp"  
#include "Casa.hpp"
#include "Apartamento.hpp"
#include "Terreno.hpp"
#include <iostream>

using namespace std;
	
Imobiliaria::Imobiliaria()
{
	
}
	
Imobiliaria::~Imobiliaria()
{
	cout << "Deletando Imobiliária\n";
	
	for(int i = 0; i < imoveis.size() + 1; i++){
		if(imoveis[i] != NULL)
			delete imoveis[i];
		imoveis[i] = NULL; //Recomendado
	}

	//O +1 é apenas para corrigir o problema de deleção (Não sei porque está acontecendo).

    imoveis.clear();
}

void Imobiliaria::addImovel(Imovel *imovel) {
    imoveis.push_back(imovel);
}

std::string Imobiliaria::buscarImovel(std::string buscar) {
	std::string aux = "";

	for (Imovel *i : imoveis) {
		if(i->getNome() == "Casa") {
			if(((Casa*)i)->exibeAtributos().find(buscar) != std::string::npos) {
				aux += ((Casa*)i)->exibeAtributos();
			}
		}

		if(i->getNome() == "Apartamento") {
			if(((Apartamento*)i)->exibeAtributos().find(buscar) != std::string::npos) {
				aux += ((Apartamento*)i)->exibeAtributos();
			}
		}
		
		if(i->getNome() == "Terreno") {
			if(((Terreno*)i)->exibeAtributos().find(buscar) != std::string::npos) {
				aux += ((Terreno*)i)->exibeAtributos();
			}
		}
    }

	//Lembrar: Sempre devo garantir que a função vai retorna um valor.

	return aux;
}
