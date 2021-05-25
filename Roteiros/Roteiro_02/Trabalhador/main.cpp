#include <iostream>
#include <string>
#include "Trabalhador.hpp"
#include "TrabalhadorAssalariado.hpp"
#include "TrabalhadorPorHora.hpp"

using namespace std;
//1- Assalariado
//2- Por hora

int main() {
    int N;
    int tipo;
    Trabalhador *trabalhadores;

    cin >> N;
    getchar();

    for(int i; i < N; i++) {

        string nome;
        float salario;
        float valorHora;
        int horasSemanais;

        cin >> tipo;
        getchar();

        if(tipo == 1) {
            trabalhadores = new TrabalhadorAssalariado;

            getline(cin, nome);
            cin >> salario;
            getchar();

            trabalhadores->setNome(nome);
            trabalhadores->setSalario(salario);

            cout << trabalhadores->getNome() << " - " <<
            "Semanal: R$ " << trabalhadores->calcularPagamentoSemanal() << " - " << 
            "Mensal: R$ " << trabalhadores->getSalario() << endl;
        }

        if(tipo == 2) {
            trabalhadores = new TrabalhadorPorHora;

            getline(cin, nome);
            cin >> valorHora;
            cin >> horasSemanais;
            getchar();

            trabalhadores->setNome(nome);
            TrabalhadorPorHora(valorHora);

            cout << trabalhadores->getNome() << " - " <<
            "Semanal: R$ " << trabalhadores->calcularPagamentoSemanal(horasSemanais) << " - " << 
            "Mensal: R$ " << trabalhadores->getSalario() << endl;
        }

        /*
        Preciso resolver:

        1- Está perguntando mais vezes que o indicado
        2- Não está mostrando os valores corretos para trabalhadores por hora

        Preciso melhorar:

        1- Saída para utilizar melhor as ferramentas do polimorfismo

        Dica:

        >> Olhar resolução do professor para ter uma idéia de qual é a melhor maneira de resolver

        */

        delete trabalhadores;
    }
}