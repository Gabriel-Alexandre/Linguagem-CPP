#include "Apartamento.hpp"  
	
Apartamento::Apartamento(std::string nome) : Imovel(nome) {
    
}

void Apartamento::lerAtributos() {
    Imovel::lerAtributos();
    cin >> area;
    cin >> quartos;
    cin >> andar;
    cin >> condominio;
    cin >> garagem;
    getchar();
}

void Apartamento::exibeAtributos() {
    cout << nome << " para " <<
    disponibilidade << ". " <<
    area << "m2 de área, " <<
    quartos << " quartos, " <<
    andar << " andar(es), " <<
    condominio << " de condomínio, " <<
    garagem << " vaga(s) de garagem. R$ " <<
    valor << "." << endl;
}
