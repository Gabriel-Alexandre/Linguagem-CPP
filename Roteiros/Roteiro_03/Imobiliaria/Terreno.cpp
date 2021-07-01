#include "Terreno.hpp"  
#include <iostream>

using namespace std;
	
Terreno::Terreno(std::string nome, std::string disponibilidade, double valorImovel,
	double areaTerreno)
    : Imovel(nome, disponibilidade, valorImovel)
{
	this->areaTerreno = areaTerreno;
}
	
Terreno::~Terreno()
{
	cout << "Deletando Terreno\n";
}

std::string Terreno::exibeAtributos() {
    std::string aux = "";
    
    aux += "Terreno para " + disponibilidade + ". " +
    to_string(int(areaTerreno)) + "m2 de área de terreno. R$ " + 
    to_string(int(valorImovel)) + "." + "\n";

    return aux;
}