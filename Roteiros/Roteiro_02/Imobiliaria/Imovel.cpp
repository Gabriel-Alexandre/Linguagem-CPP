#include "Imovel.hpp"  
	
Imovel::Imovel(std::string nome) {
	this->nome = nome;
}

std::string Imovel::getNome() {
	return nome;
}

std::string Imovel::getDisponibilidade() {
	return disponibilidade;
}

float Imovel::getValor() {
	return valor;
}

void Imovel::lerAtributos() {
	cin >> valor;
	getchar();
	getline(cin, disponibilidade);
}

void Imovel::exibeAtributos() {

}
	