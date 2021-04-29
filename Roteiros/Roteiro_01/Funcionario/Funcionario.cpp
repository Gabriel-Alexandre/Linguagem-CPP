#include "Funcionario.h"
#include <iostream>

using namespace std;

Funcionario::Funcionario() {

}

float Funcionario::getSalarioAnual() {
    return  12 * salarioMensal;
}