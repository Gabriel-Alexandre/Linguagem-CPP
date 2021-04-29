#ifndef INVOICE_H
#define INVOICE_H
#include <string>

using namespace std;

class Invoice {
    public:
        Invoice();
        float getInvoiceAmount(int, int);
        int numero;
        int quantidade;
        float preco;
        string descricao;
};
#endif