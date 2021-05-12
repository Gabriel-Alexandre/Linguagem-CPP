#include "Retangulo.hpp"
#include <iostream>

using namespace std;
	
Retangulo::Retangulo() {
	
}
	
Retangulo::Retangulo(int tipo) {
	FiguraGeometrica(2);
}

float Retangulo::calcularArea() {
    return largura * comprimento;
}

void Retangulo::lerAtributosArea() {
    cin >> largura;
    cin >> comprimento;
}