#ifndef PAGAMENTO_H
#define PAGAMENTO_H
#include <string>

using namespace std;

class Pagamento {
    public:
        Pagamento();
        float getValorPagamento();
        string getNomeFuncionario();
        void setValorPagamento(float v);
        void setNomeFuncionario(string n);

    private:
        float valorPagamento;
        string nomeFuncionario;

};

#endif