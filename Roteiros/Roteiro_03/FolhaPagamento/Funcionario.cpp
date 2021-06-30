#include "Funcionario.hpp"  
	
Funcionario::Funcionario(std::string nome, int matricula) {
    this->nome = nome;
    this->matricula = matricula;
}

std::string Funcionario::getNome(){
    return nome;
}


