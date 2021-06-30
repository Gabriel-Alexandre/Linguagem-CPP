#include "Medicamento.hpp"  
	
Medicamento::Medicamento(std::string nome, std::string dtVencimento, std::string nomeFabricante, int quantidade, int valorUnitario, int tipoInsumo, 
std::string dosagem, std::string administracao, std::string disponibilizacao) :
    Insumo(nome, dtVencimento, nomeFabricante, quantidade, valorUnitario, tipoInsumo)
{
	this->dosagem = dosagem;
    this->administracao = administracao;
    this->disponibilizacao = disponibilizacao;
}
	
Medicamento::~Medicamento()
{
	
}