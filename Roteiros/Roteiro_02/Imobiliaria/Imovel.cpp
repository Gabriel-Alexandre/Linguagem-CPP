#include "Imovel.hpp"  
	
Imovel::Imovel(std::string nome, std::string disponibilidade, float valor) {
	this->nome = nome;
	this->disponibilidade = disponibilidade;
	this->valor = valor;
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
    int nomeI;

	switch (nomeI) {
	case 1:
		this->nome = "Casa";
		break;
	case 2:
		this->nome = "Apartamento";
		break;
	case 3:
		this->nome = "Terreno";
		break;
	default:
		break;
	}

	cin >> valor;
	getchar();
	getline(cin, disponibilidade);
}

void Imovel::exibeAtributos() {

}
	