#include <iostream>
#include <string>
#include "Quadrado.hpp"
#include "Retangulo.hpp"
#include "Circulo.hpp"
#include "Triangulo.hpp"
#include "FiguraGeometrica.hpp"

using namespace std;

int main () {
    int tipo;
    FiguraGeometrica *fig;

    while(1) {

        cin >> tipo;

        if (tipo == 0)
            break;
        
        switch (tipo) {
        case 1:
            fig = new Quadrado();
            break;
        case 2:
            fig = new Retangulo();
            break;
        case 3:
            fig = new Triangulo();
            break;
        case 4:
            fig = new Circulo();
            break;
        default:
            break;
        }

        fig->lerAtributosArea();
        cout << fig->getNome() << " polimórfico de área " << fig->calcularArea() << endl;
    }
}