#include "Triangulo.hpp" 
#include <iostream>

using namespace std;
	
Triangulo::Triangulo() {
	
}
	
Triangulo::Triangulo(int tipo) {
	FiguraGeometrica(3);
}

float Triangulo::calcularArea() {
    return (base * altura)/2;
}

void Triangulo::lerAtributosArea() {
    cin >> base;
    cin >> altura;
}