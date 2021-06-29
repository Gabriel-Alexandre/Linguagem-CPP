#include "SistemaGerenciaFolha.hpp"  
	
SistemaGerenciaFolha::SistemaGerenciaFolha() {
	
}
	
void SistemaGerenciaFolha::setFuncionarios(Funcionario *funcionario) {
    funcionarios.push_back(funcionario);
}

double SistemaGerenciaFolha::calculaValorTotalFolha() {
    return 0;
}

double SistemaGerenciaFolha::consultaSalarioFuncionario() {
    return 0;
}
