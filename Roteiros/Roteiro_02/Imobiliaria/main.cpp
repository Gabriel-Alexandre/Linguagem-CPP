#include "Imovel.hpp"
#include "Casa.hpp"
#include "Apartamento.hpp"
#include "Terreno.hpp"
#include <iostream>
#include <string>

using namespace std;

int main () {
    int N;
    int tipoImovel;
    Casa casa = Casa("Casa");
    Apartamento apartamento = Apartamento("Apartamento");
    Terreno terreno = Terreno("Terreno");

    cin >> N;
    
    for(int i = 0; i < N; i++) {
        cin >> tipoImovel;

        switch (tipoImovel)  {
            case 1:
                casa.lerAtributos();
                casa.exibeAtributos();
                break;
            case 2:
                apartamento.lerAtributos();
                apartamento.exibeAtributos();
                break;
            case 3:
                terreno.lerAtributos();
                terreno.exibeAtributos();
                break;
        default:
            break;
        }
    }

    return 0;
}