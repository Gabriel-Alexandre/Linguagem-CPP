#ifndef PEDIDO_H
#define PEDIDO_H
#include <string>

using namespace std;

class Pedido {
    public:
        Pedido();
        int getNumero();
        int getQuantidade();
        float getPreco();
        string getDescricao();
        float getTotal();
        void setNumero(int i);
        void setQuantidade(int q);
        void setPreco(float p);
        void setDescricao(string d);
        void incrementar(int qtd);

    private:
        int numero, quantidade;
        string descricao;
        float preco;
};

#endif