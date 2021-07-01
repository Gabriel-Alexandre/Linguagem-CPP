#include "Casa.hpp"  
#include <iostream>

using namespace std;
	
Casa::Casa(std::string nome, std::string disponibilidade, double valorImovel,
	int pavimentos, int quartos, double areaTerreno, double areaConstruida)
    : Imovel(nome, disponibilidade, valorImovel)
{
	this->pavimentos = pavimentos;
    this->quartos = quartos;
    this->areaTerreno = areaTerreno;
    this->areaConstruida = areaConstruida;
}
	
Casa::~Casa()
{
	cout << "Deletando Casa\n";
}

std::string Casa::exibeAtributos() {
    std::string aux = "";

    aux += "Casa para " + disponibilidade + ". " +
    to_string(pavimentos) + " pavimentos, " +
    to_string(quartos) + " quartos, " +
    to_string(int(areaTerreno)) + "m2 de área de terreno e " +
    to_string(int(areaConstruida)) + "m2 de área construída. R$ " +
    to_string(int(valorImovel)) + "." + "\n";

    return aux;
}