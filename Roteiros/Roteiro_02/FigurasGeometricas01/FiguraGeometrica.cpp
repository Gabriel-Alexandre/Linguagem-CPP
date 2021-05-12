#include "FiguraGeometrica.hpp"  
	
FiguraGeometrica::FiguraGeometrica() {

}
	
FiguraGeometrica::FiguraGeometrica(int t) {
	switch (t) {
        case 0:
            nome = "INDEFINIDO";
            break;
        case 1:
            nome = "QUADRADO";
            break;
        case 2:
            nome = "RETANGULO";
            break;
        case 3:
            nome = "TRIANGULO";
            break;
        case 4:
            nome = "CIRCULO";
            break;
        default:
            break;
    }
}

float FiguraGeometrica::calcularArea() {
    return 0;
}

void FiguraGeometrica::lerAtributosArea() {

}

string FiguraGeometrica::getNome() {
    return nome;
}