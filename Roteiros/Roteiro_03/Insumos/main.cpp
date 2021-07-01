#include <iostream>
#include <string>
#include "Insumo.hpp"
#include "Local.hpp"
#include "Vacina.hpp"
#include "Medicamento.hpp"
#include "Epi.hpp"

/*
>>> Anotações Importantes:

>> Destrutores:

-> São utilizados para liberar a memória que foi utilizada dinâmicamente.
-> São chamados quando eu dou o delete no objeto em questão. (Assim sendo, eu implemento sua execução na classe, mas
para que tudo ocorra bem, eu preciso fazer a sua chamada no momento apropriado durante o código).

>> Uso de métodos específicos de classes filhas:

-> O uso intuitivo não vai funcionar, para utilizar métodos específicos das classes filhas eu preciso fazer operações de casting,
sejam essas gerais ou pontuais.
-> O que posso fazer:

1- Instânciar objetos com as classes filhas específicas e utilizar o polimorfismo com o vetor polimorfico.
2- Utilizar uma operação de casting no ponto específico que eu desejo utilizar a função. (Seguir o exemplo a baixo).

Ex: 

Trabalhador *trabalhador;

((TrabalhadorAssalariado*)trabalhador)->calcularSalaria();

*/

using namespace std;

int main() {
    Local *local = new Local();
    string nome, dtVencimento, nomeFabricante, loc;
    int quantidade;
    int valorUnitario;
    int tipo, quantidadeDoses, intervalo;
    string dosagem, administracao, disponibilizacao;
    string descricao;
	int tipoEPI;
    int tipoInsumo;

    Insumo *insumos;
    Insumo *insumos2;


    for (int i = 0; i < 3; i++) {
        getline(cin, nome);
        cin >> quantidade;
        cin >> valorUnitario;
        getchar();
        getline(cin, dtVencimento);
        getline(cin, nomeFabricante);
        getline(cin, loc);

        switch(i) {
            case 0:
                cin >> tipo;
                cin >> quantidadeDoses;
                cin >> intervalo;
                getchar();

                insumos = new Vacina(nome, dtVencimento, nomeFabricante, quantidade, valorUnitario,
                tipoInsumo, tipo, quantidadeDoses, intervalo);
                insumos2 = new Vacina(nome, dtVencimento, nomeFabricante, quantidade, valorUnitario,
                tipoInsumo, tipo, quantidadeDoses, intervalo);

                break;
            case 1:
                getline(cin, dosagem);
                getline(cin, administracao);
                getline(cin, disponibilizacao);

                insumos = new Medicamento(nome, dtVencimento, nomeFabricante, quantidade, valorUnitario,
                tipoInsumo, dosagem, administracao, disponibilizacao);
                insumos2 = new Medicamento(nome, dtVencimento, nomeFabricante, quantidade, valorUnitario,
                tipoInsumo, dosagem, administracao, disponibilizacao);

                break;
            case 2:
                getline(cin, descricao);
                cin >> tipoEPI;
                getchar();

                insumos = new Epi(nome, dtVencimento, nomeFabricante, quantidade, valorUnitario,
                tipoInsumo, descricao, tipoEPI);
                insumos2 = new Epi(nome, dtVencimento, nomeFabricante, quantidade, valorUnitario,
                tipoInsumo, descricao, tipoEPI);

                break;
        }
        local->addInsumoA(insumos, i);
        local->addInsumoV(insumos2);
    }

    delete local;

    return 0;
}