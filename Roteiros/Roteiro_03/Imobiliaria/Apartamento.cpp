#include "Apartamento.hpp"  
#include <iostream>

using namespace std;
	
Apartamento::Apartamento(std::string nome, std::string disponibilidade, double valorImovel,
	double area, double condominio, int quartos, int andar, int garagem)
    : Imovel(nome, disponibilidade, valorImovel)
{
	this->area = area;
    this->condominio = condominio;
    this->quartos = quartos;
    this->andar =andar;
    this->garagem =garagem;
}
	
Apartamento::~Apartamento()
{
	cout << "Deletando Apartamento\n";
}

std::string Apartamento::exibeAtributos() {
    std::string aux = "";

    aux += "Apartamento para " + disponibilidade + ". " +
    to_string(int(area)) + "m2 de área, " + 
    to_string(quartos) + " quartos, " +
    to_string(andar) + " andar(es), " + 
    to_string(int(condominio)) + " de condomínio, " +
    to_string(garagem) + " vaga(s) de garagem. R$ " +
    to_string(int(valorImovel)) + "." + "\n";

    return aux;
}