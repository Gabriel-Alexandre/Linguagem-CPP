#include "Epi.hpp"  
#include <iostream>

using namespace std;
	
Epi::Epi(std::string nome, std::string dtVencimento, std::string nomeFabricante, int quantidade, int valorUnitario, int tipoInsumo, 
std::string descricao, int tipo)
    : Insumo(nome, dtVencimento, nomeFabricante, quantidade, valorUnitario, tipoInsumo)
{
	this->descricao = descricao;
    this->tipo = tipo;
}
	
Epi::~Epi()
{
	cout << "Deletando EPI\n";
}