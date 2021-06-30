#include "SistemaGerenciaFolha.hpp"  
	
SistemaGerenciaFolha::SistemaGerenciaFolha() {
	
}
	
void SistemaGerenciaFolha::setFuncionarios(Funcionario *funcionario) {
    funcionarios.push_back(funcionario);
}

double SistemaGerenciaFolha::calculaValorTotalFolha() {
    double soma;

    // for (int i = 0; i < funcionarios.size(); i++) {
    //     soma += funcionarios[i]->calculaSalario();
    // }

    //foreach
    for (Funcionario *f : funcionarios) {
        soma += f->calculaSalario();
    }

    return soma;
}

double SistemaGerenciaFolha::consultaSalarioFuncionario(std::string nome) {
    
    for (Funcionario *f : funcionarios) {
        if(f->getNome().find(nome) != std::string::npos) {
            return f->calculaSalario();
        }
    }
    
    return -1;
}
