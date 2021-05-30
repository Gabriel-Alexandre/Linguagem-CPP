#include "Imovel.hpp"  
	
Imovel::Imovel(std::string nome) {
	this->nome = nome;
}

void Imovel::lerAtributos() {
	cin >> valor;
	getchar();
	getline(cin, disponibilidade);
}

void Imovel::exibeAtributos() {

}
	