#ifndef DESPESA_H
#define DESPESA_H
#include <string>

using namespace std;

class Despesa {
    public:
        Despesa();
        string getNome();
        string getTipoGasto();
        float getValor();
        void setNome(string);
        void setTipoGasto(string);
        void setValor(float);

    private:
        string nome;
        string tipoGasto;
        float valor;

};

#endif