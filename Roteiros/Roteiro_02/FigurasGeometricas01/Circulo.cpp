#include "Circulo.hpp"  
#include <iostream>

using namespace std;
	
Circulo::Circulo() {
	
}
	
Circulo::Circulo(int tipo) {
	FiguraGeometrica(4);
}

float Circulo::calcularArea() {
    return 3.14 * (raio * raio);
}

void Circulo::lerAtributosArea() {
    cin >> raio;
}