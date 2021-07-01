#include <iostream>
#include <string>
#include "Imovel.hpp"
#include "Casa.hpp"
#include "Apartamento.hpp"
#include "Terreno.hpp"
#include "Imobiliaria.hpp"

using namespace std;

/*((TrabalhadorAssalariado*)trabalhador)->calcularSalaria();*/

int main() {

    string nome = "";
    string disponibilidade;
	double valorImovel;
    int pavimentos, quartos, quartosApart;
	double areaTerrenoCasa, areaConstruida;
    double area, condominio;
	int andar, garagem;
    double areaTerrenoTerreno;

    /*
    
    -> Só falta implementar o buscador.

    */

    Imovel *imovel;
    Imobiliaria *imobiliaria = new Imobiliaria(); // Sempre cuidar da instanciação do objeto

    int N, tipo;
    string buscar;

    cin >> N;

    for(int i = 0; i < N; i++) {
        cin >> tipo;
        cin >> valorImovel;
        getchar();

        getline(cin, disponibilidade);

        switch(tipo) {
            case 1:
                cin >> pavimentos;
                cin >> quartos;
                cin >> areaTerrenoCasa;
                cin >> areaConstruida;
                getchar();

                nome = "Casa";

                imovel = new Casa(nome, disponibilidade, valorImovel, pavimentos,
                quartos, areaTerrenoCasa, areaConstruida);
                break;
            case 2:
                cin >> area;
                cin >> quartosApart;
                cin >> andar;
                cin >> condominio;
                cin >> garagem;
                getchar();

                nome = "Apartamento";

                imovel = new Apartamento(nome, disponibilidade, valorImovel, area,
                condominio, quartosApart, andar, garagem);
                break;
            case 3:
                cin >> areaTerrenoTerreno;
                getchar();

                nome = "Terreno";

                imovel = new Terreno(nome, disponibilidade, valorImovel, areaTerrenoTerreno);
                break;
        }        

        imobiliaria->addImovel(imovel);
    }

    getline(cin, buscar);

    cout << imobiliaria->buscarImovel(buscar);

    delete imobiliaria;
    
    return 0;
}