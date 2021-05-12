#include "Quadrado.hpp" 
#include <iostream>

using namespace std;
	
Quadrado::Quadrado() {

}
	
Quadrado::Quadrado(int tipo) {
	FiguraGeometrica(1);
}

float Quadrado::calcularArea() {
    return lado * lado;
}

void Quadrado::lerAtributosArea() {
    cin >> lado;
}