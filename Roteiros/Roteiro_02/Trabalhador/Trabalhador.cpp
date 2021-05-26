#include "Trabalhador.hpp"  
	
Trabalhador::Trabalhador() {
	salario = 0;
}

void Trabalhador::setNome(std::string nome) {
    this->nome = nome;
}

void Trabalhador::setSalario(float salario) {
    this->salario = salario;
}

std::string Trabalhador::getNome() {
    return nome;
}

float Trabalhador::getSalario() {
    return salario;
}