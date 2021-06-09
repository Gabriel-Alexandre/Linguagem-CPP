#include "ContaEspecial.hpp"  
	
ContaEspecial::ContaEspecial(std::string nomeCliente, int numeroConta, double salario) : ContaCorrente(nomeCliente, numeroConta, salario)
{
	
}

double definirLimite() {
    return 0; /*Falta implementar*/
}
