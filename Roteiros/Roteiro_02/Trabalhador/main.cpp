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
    TrabalhadorPorHora trabalhadoresH;
    TrabalhadorAssalariado trabalhadoresA;

    cin >> N;
    getchar();

    for(int i = 0; i < N; i++) {

        string nome;
        float salario;
        float valorHora;
        int horasSemanais;

        cin >> tipo;
        getchar();
        getline(cin, nome);

        if(tipo == 1) {
            cin >> salario;

            trabalhadoresA = TrabalhadorAssalariado(nome, salario);

            cout << trabalhadoresA.getNome() << " - " <<
            "Semanal: R$ " << trabalhadoresA.calcularPagamentoSemanal() << " - " << 
            "Mensal: R$ " << trabalhadoresA.getSalario() << endl;
        }

        if(tipo == 2) {
            cin >> valorHora;
            cin >> horasSemanais;

            trabalhadoresH = TrabalhadorPorHora(nome, valorHora);

            cout << trabalhadoresH.getNome() << " - " <<
            "Semanal: R$ " << trabalhadoresH.calcularPagamentoSemanal(horasSemanais) << " - " << 
            "Mensal: R$ " << trabalhadoresH.getSalario() << endl;
        }
    }
}