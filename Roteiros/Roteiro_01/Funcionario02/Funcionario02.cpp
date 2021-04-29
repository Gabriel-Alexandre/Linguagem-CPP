#include "Funcionario02.h"
#include <iostream>
#include <string>

using namespace std;

Funcionario02::Funcionario02() {
    nome = "";
    sobrenome = "";
    salarioMensal = 0;
}

void Funcionario02::aumentaSalario(float a) {
    salarioAnual = ((salarioMensal * 12) + ((salarioMensal * 12) * 0.1));
}

string Funcionario02::getNome(){
    return nome;
}

string Funcionario02::getSobrenome(){
    return sobrenome;
}

float Funcionario02::getSalarioMensal(){
    return salarioMensal;
}

float Funcionario02::getSalarioAnual() {
    return  (salarioMensal * 12);
}

float Funcionario02::getSalarioAnual(float sa) {
    return  salarioAnual;
}

void Funcionario02::setNome(string n){
    nome = n;
}

void Funcionario02::setSobrenome(string s){
    sobrenome = s;
}

void Funcionario02::setSalarioMensal(float sm){
    if(sm > 0){
        salarioMensal = sm;
    }
}