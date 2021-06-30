#include <iostream>
#include <string>
#include "Funcionario.hpp"
#include "Assalariado.hpp"
#include "Horista.hpp"
#include "Comissionado.hpp"
#include "SistemaGerenciaFolha.hpp"
#include "FuncionarioNaoExisteException.hpp"
#include "OrcamentoEstouradoException.hpp"


using namespace std;

int main () {
    string nome, buscar;
    int matricula;
    double salario, salarioPorHora, horasTrabalhadas, vendasMensal, percentualComissao, orcamentoMax;
    Funcionario *funcionario;
    SistemaGerenciaFolha *sistemaGerenciaFolha;

    cin >> orcamentoMax;
    getchar();

    sistemaGerenciaFolha = new SistemaGerenciaFolha(orcamentoMax);


    for(int i = 0; i <= 2; i++) {

        getline(cin, nome);
        cin >> matricula;

        if (i == 0) {
            cin >> salario;
            getchar();

            funcionario = new Assalariado(nome, matricula, salario);
            sistemaGerenciaFolha->setFuncionarios(funcionario);
        }

        if (i == 1) {
            cin >> salarioPorHora;
            cin >> horasTrabalhadas;
            getchar();

            funcionario = new Horista(nome, matricula, salarioPorHora, horasTrabalhadas);
            sistemaGerenciaFolha->setFuncionarios(funcionario);
        }

        if (i == 2) {
            cin >> vendasMensal;
            cin >> percentualComissao;
            getchar();

            funcionario = new Comissionado(nome, matricula, vendasMensal, percentualComissao);
            sistemaGerenciaFolha->setFuncionarios(funcionario);
        }
    }

    for(int i = 0; i <= 2; i++) {
        getline(cin, buscar);
        try{

            cout << sistemaGerenciaFolha->consultaSalarioFuncionario(buscar) << endl;

        }catch (FuncionarioNaoExisteException e) {

        }
        
    }

    try{

        cout << sistemaGerenciaFolha->calculaValorTotalFolha() << endl;

    }catch (OrcamentoEstouradoException e) {

    }
}