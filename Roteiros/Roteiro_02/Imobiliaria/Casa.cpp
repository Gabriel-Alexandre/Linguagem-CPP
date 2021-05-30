#include "Casa.hpp"  
	
Casa::Casa(std::string nome, std::string disponibilidade, float valor, int pavimentos, int quartos, float areaTerreno, float areaConstruida) : Imovel(nome, disponibilidade, valor) {
    this->pavimentos = pavimentos;
    this->quartos = quartos;
    this->areaTerreno = areaTerreno;
    this->areaConstruida = areaConstruida;
}

int Casa::getPavimentos() {
    return pavimentos; 
}

int Casa::getQuartos() {
    return quartos;
}

float Casa::getAreaTerreno() {
    return areaTerreno;
}

float Casa::getAreaConstruida() {
    return areaConstruida;
}

void Casa::lerAtributos() {
    Imovel::lerAtributos();
    cin >> pavimentos;
    cin >> quartos;
    cin >> areaTerreno;
    cin >> areaConstruida;
    getchar();
}

void Casa::exibeAtributos() {
    cout << nome << " para " <<
    disponibilidade << ". " <<
    pavimentos << " pavimentos, " <<
    quartos << " quartos, " <<
    areaTerreno << "m2 de área de terreno e " <<
    areaConstruida << "m2 de área construída. R$ " <<
    valor << "." << endl;
}
	
