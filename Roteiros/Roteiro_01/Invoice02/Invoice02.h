#ifndef INVOICE_H
#define INVOICE_H
#include <string>

using namespace std;

class Invoice02 {
    public:
        Invoice02(int, int, float, string);
        Invoice02();
        void setnumero(int);
        void setquantidadeComprada(int);
        void setPreco(float);
        void setDescricao(string);
        int getNumero();
        int getquantidadeComprada();
        float getPreco();
        string getDescricao();
        float getInvoiceAmount();
        void print();
    private:
        int numero;
        int quantidadeComprada;
        float preco;
        string descricao;
};

#endif