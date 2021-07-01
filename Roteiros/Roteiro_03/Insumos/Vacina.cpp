#include "Vacina.hpp" 
#include <iostream>

using namespace std;
	
Vacina::Vacina(std::string nome, std::string dtVencimento, std::string nomeFabricante, int quantidade, 
int valorUnitario, int tipoInsumo, int tipo, int quantidadeDoses, int intervalo) :
    Insumo(nome, dtVencimento, nomeFabricante, quantidade, valorUnitario, tipoInsumo)
{
	this->tipo = tipo;
    this->quantidadeDoses = quantidadeDoses;
    this->intervalo = intervalo;
}
	
Vacina::~Vacina()
{
	cout << "Deletando Vacina\n";
}