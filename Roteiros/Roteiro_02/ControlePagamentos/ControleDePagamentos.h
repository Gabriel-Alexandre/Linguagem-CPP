#ifndef CONTROLEDEPAGAMENTOS_H
#define CONTROLEDEPAGAMENTOS_H
#include "Pagamento.h"
#include <string>
#include <vector>

using namespace std;

class ControleDePagamentos {
    public:
        ControleDePagamentos();
        void setPagamentos(Pagamento p);
        Pagamento getPagamento(int pos);
        float calculaTotalDePagamentos();
        int getIndexFuncionario(string n);

    private:
        vector<Pagamento> pagamentos; 

};

#endif