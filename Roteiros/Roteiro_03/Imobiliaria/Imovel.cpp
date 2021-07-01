#include "Imovel.hpp" 
#include <iostream>

using namespace std;
	
Imovel::Imovel(std::string nome, std::string disponibilidade, double valorImovel)
{
	this->nome = nome;
    this->disponibilidade = disponibilidade;
    this->valorImovel = valorImovel;
}
	
Imovel::~Imovel()
{
	cout << "Deletando Imovel\n";
}

std::string Imovel::getNome() {
    return this->nome;
}

std::string Imovel::getDisponibilidade() {
    return this->disponibilidade;
}

double Imovel::getValorImovel() {
    return this->valorImovel;
}

