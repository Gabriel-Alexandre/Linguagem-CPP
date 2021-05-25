#include "Trabalhador.hpp"  
	
Trabalhador::Trabalhador() {
	salario = 0;
}

std::string Trabalhador::getNome() {
    return nome;
}

float Trabalhador::getSalario() {
    return salario;
}

void Trabalhador::setNome(std::string nome) {
    this->nome = nome;
}

void Trabalhador::setSalario(float salario) {
    this->salario = salario;
}

float Trabalhador::calcularPagamentoSemanal() {
    
}

float Trabalhador::calcularPagamentoSemanal(int i) {
    
}