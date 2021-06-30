#include "Horista.hpp"  
	
Horista::Horista(std::string nome, int matricula, double salarioPorHora, double horasTrabalhadas) : 
    Funcionario(nome, matricula)
{
	this->salarioPorHora = salarioPorHora;
    this->horasTrabalhadas = horasTrabalhadas;
}
	
double Horista::calculaSalario() {
    double salarioSemanal = salarioPorHora * horasTrabalhadas;

    if (horasTrabalhadas > 40) {
        salarioSemanal = salarioPorHora * 40 + 
        (horasTrabalhadas - 40) * 1.5 * salarioPorHora;
    }

    return salarioSemanal * 4;
}
