#include "Apartamento.hpp"  
	
Apartamento::Apartamento(std::string nome, std::string disponibilidade, float valor, int quartos, int andar, int garagem, float area, float condominio) : Imovel(nome, disponibilidade, valor) {
    this->quartos = quartos;
    this->andar = andar;
    this->garagem = garagem;
    this->area = area;
    this->condominio = condominio;
}
int Apartamento::getQuartos() {
    return quartos;
}

int Apartamento::getAndar() {
    return andar;
}

int Apartamento::getGaragem() {
    return garagem;
}

float Apartamento::getArea() {
    return area;
}

float Apartamento::getCondominio() {
    return condominio;
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
