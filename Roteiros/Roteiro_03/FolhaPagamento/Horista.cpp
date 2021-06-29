#include "Horista.hpp"  
	
Horista::Horista() {
	salarioPorHora = 0;
    horasTrabalhadas = 0;
}
	
double Horista::calculaSalario() {

    // if (horasTrabalhadas <= 40){
    //     return salarioPorHora * horasTrabalhadas;
    // }else{
    //     double extra, soma, soma2;
        
    //     extra = salarioPorHora * 1.5;
    //     soma = salarioPorHora * 40;
    //     soma2 = extra * (horasTrabalhadas - 40);

    //     return soma + soma2; 
    // }
    return 0;
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
