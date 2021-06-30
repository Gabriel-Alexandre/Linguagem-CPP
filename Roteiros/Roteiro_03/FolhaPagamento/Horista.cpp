#include "Horista.hpp"  
	
Horista::Horista() {
	salarioPorHora = 0;
    horasTrabalhadas = 0;
}
	
double Horista::calculaSalario() {
    double salarioSemanal = salarioPorHora * horasTrabalhadas;

    if (horasTrabalhadas > 40) {
        salarioSemanal = salarioPorHora * 40 + 
        (horasTrabalhadas - 40) * 1.5 * salarioPorHora;
    }

    return salarioSemanal * 4;
}

double Horista::getSalarioPorHora() {
    return salarioPorHora;
}

double Horista::getHorasTrabalhadas() {
    return horasTrabalhadas;
}

void Horista::setSalarioPorHora(double salarioPorHora) {
    this->salarioPorHora = salarioPorHora;
}

void Horista::setHorasTrabalhadas(double horasTrabalhadas) {
    this->horasTrabalhadas = horasTrabalhadas;
}
