#include <iostream>
#include <string>
#include "Quadrado.hpp"
#include "Retangulo.hpp"
#include "Circulo.hpp"
#include "Triangulo.hpp"

using namespace std;

int main () {
    int tipo;
    Quadrado q;
    Retangulo r;
    Circulo c;
    Triangulo t;

    while(1) {

        cin >> tipo;

        if (tipo == 0)
            break;
        
        switch (tipo) {
        case 1:
            q.lerAtributosArea();
            cout << "Quadrado" << " de área " << q.calcularArea() << endl;
            break;
        case 2:
            r.lerAtributosArea();
            cout << "Retângulo" << " de área " << r.calcularArea() << endl;
            break;
        case 3:
            t.lerAtributosArea();
            cout << "Triângulo" << " de área " << t.calcularArea() << endl;
            break;
        case 4:
            c.lerAtributosArea();
            cout << "Círculo" << " de área " << c.calcularArea() << endl;
            break;
        default:
            break;
        }


    }
}