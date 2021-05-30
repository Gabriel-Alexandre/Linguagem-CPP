#include "Terreno.hpp"  
	
Terreno::Terreno(std::string nome) : Imovel(nome) {
	
}

float Terreno::getArea() {
	return area;
}

void Terreno::lerAtributos() {
	Imovel::lerAtributos();
	cin >> area;
	getchar();
}

void Terreno::exibeAtributos() {
   	cout << nome << " para " <<
    disponibilidade << ". " <<
	area << "m2 de área de terreno. R$ " <<
	valor << "." << endl;
}
	
