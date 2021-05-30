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

    //Preciso mudar um pouco a implementação do nome para dar certo
    //Estudar como fazer a implementação do main
    /*Na função principal leia N imóveis. Leia o valor de N, em seguida, leia o tipo e instancie o imóvel correspondente ao tipo (declare um objeto para cada possível tipo). Logo após, chame o método lerAtributos() para ler os atributos específicos do imóvel em questão, e exiba a seus atributos de acordo com a saída esperada.
    */

    return 0;
}