#include "Quadrado.h"
#include <iostream>

using namespace std;

Quadrado::Quadrado(int t)
    :FiguraGeometrica(t)
{
    nome = "Quadrado";
}

float Quadrado::calcularArea() {
    return lado * lado;
}

void Quadrado::lerAtributo() {
    cin >> lado;
}