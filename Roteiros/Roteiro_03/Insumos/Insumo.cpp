#include "Insumo.hpp"  
	
Insumo::Insumo(std::string nome, std::string dtVencimento, std::string nomeFabricante, int quantidade, int valorUnitario, int tipoInsumo)
{
	this->nome = nome;
    this->dtVencimento = dtVencimento;
    this-> nomeFabricante = nomeFabricante;
    this->quantidade = quantidade;
    this->valorUnitario = valorUnitario;
    this->tipoInsumo = tipoInsumo;
}
	
Insumo::~Insumo()
{
	
}