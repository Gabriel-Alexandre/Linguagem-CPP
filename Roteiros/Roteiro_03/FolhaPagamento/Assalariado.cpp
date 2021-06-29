#include "Assalariado.hpp"  
	
Assalariado::Assalariado() {
	salario = 0;
}

double Assalariado::calculaSalario() {
    return salario;
}
	
double Assalariado::getSalario() {
    return salario;
}

void Assalariado::setSalario(double salario) {
    this->salario = salario;
}
