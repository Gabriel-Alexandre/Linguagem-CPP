#include "Casa.hpp"  
	
Casa::Casa(std::string nome) : Imovel(nome){   
    
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
	
