#include "Consultor.hpp"  
	
Consultor::Consultor() {
	
}
	
float Consultor::getSalario() {
	return salario * 1.1;
}

float Consultor::getSalario(float p) {
    return salario * p;
}