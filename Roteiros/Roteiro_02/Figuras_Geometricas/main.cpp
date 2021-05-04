#include <iostream>
#include <string>
#include "Figura_Geomatrica.h"
#include "Quadrado.h"

using namespace std;

int main() {
    int tipo;
    FiguraGeometrica *fig;

    do {
        cin >> tipo;

        switch (tipo)
        {
        case 1:
            fig = new Quadrado(tipo);
            break;
        default:
            break;
        }

        fig-> lerAtributo();
        cout << "de area: " << fig->calcularArea();

    } while(tipo != 0);
}