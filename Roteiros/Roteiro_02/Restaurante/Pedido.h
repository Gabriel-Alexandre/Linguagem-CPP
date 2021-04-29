#ifndef PEDIDO_H
#define PEDIDO_H
#include <string>

using namespace std;

class Pedido {
    public:
        Pedido();
        Pedido(int n, string d, int q, float p);
        int getNumero();
        string getDescricao();
        int getQuantidade();
        float getPreco();
        void setQuantidade(int q);

    private:
        int numero, quantidade;
        string descricao;
        float preco;
};

#endif