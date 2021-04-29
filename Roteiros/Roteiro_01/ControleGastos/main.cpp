#include <iostream>
#include "ControleDeGastos.h"
#include <string>
#include <vector>

using namespace std;

int main() {
    int n;
    float valor;
    string tipo, nome;
    Despesa despesa;
    ControleDeGastos controle1;

    cin >> n;
    getchar();

    for(int i = 0; i < n; i++) {
        getline(cin, nome);
        despesa.setNome(nome);

        cin >> valor;
        getchar();
        despesa.setValor(valor);

        getline(cin, tipo);
        despesa.setTipoGasto(tipo);

        controle1.setDespesa(despesa);
    }

    getline(cin, tipo);

    if(!controle1.existeDespesaDoTipo(tipo)) {
        cout << "Nenhuma despesa do tipo especificado" << endl;
    }
    else {
        for(int i = 0; i < n; i++) {
            if(tipo == controle1.getDespesa(i).getTipoGasto()) {
                cout << controle1.getDespesa(i).getNome() << ", " << "R$ " <<
                controle1.getDespesa(i).getValor() << endl;
            }
        }

    }

    cout << "Total: " << controle1.calculaTotalDeDespesas(tipo) << "/" << controle1.calculaTotalDeDespesas() << endl;
}