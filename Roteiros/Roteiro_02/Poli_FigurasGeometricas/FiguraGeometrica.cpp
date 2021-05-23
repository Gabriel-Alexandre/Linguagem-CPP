#include "FiguraGeometrica.hpp"  
	
FiguraGeometrica::FiguraGeometrica() {

}
	
FiguraGeometrica::FiguraGeometrica(int t) {
	switch (t) {
        case 0:
            nome = "Indefinido";
            break;
        case 1:
            nome = "Quadrado";
            break;
        case 2:
            nome = "Retângulo";
            break;
        case 3:
            nome = "Triângulo";
            break;
        case 4:
            nome = "Círculo";
            break;
        default:
            break;
    }
}

string FiguraGeometrica::getNome() {
    return nome;
}