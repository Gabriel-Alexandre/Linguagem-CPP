#include "SistemaGerenciaFolha.hpp"
#include "FuncionarioNaoExisteException.hpp"  
#include "OrcamentoEstouradoException.hpp"
	
SistemaGerenciaFolha::SistemaGerenciaFolha(double orcamentoMax) {
	this->orcamentoMax = orcamentoMax;
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

    if (soma > orcamentoMax) {
        throw OrcamentoEstouradoException(soma);
    }

    return soma;
}

double SistemaGerenciaFolha::consultaSalarioFuncionario(std::string nome) {
    
    for (Funcionario *f : funcionarios) {
        if(f->getNome().find(nome) != std::string::npos) {
            return f->calculaSalario();
        }
    }

    throw FuncionarioNaoExisteException(nome);
}
