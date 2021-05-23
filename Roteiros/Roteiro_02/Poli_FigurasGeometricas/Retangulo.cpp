#include "Retangulo.hpp"
#include <iostream>

using namespace std;
	
Retangulo::Retangulo() : FiguraGeometrica(2) {}

float Retangulo::calcularArea() {
    return largura * comprimento;
}

void Retangulo::lerAtributosArea() {
    cin >> largura;
    cin >> comprimento;
}