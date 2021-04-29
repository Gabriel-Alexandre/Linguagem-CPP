#ifndef PESSOA02_H
#define PESSOA02_H
#include <string>

using namespace std;

class Pessoa02 {
    public:
        Pessoa02();
        string getNome();
        string getTelefone();
        int getIdade();
        void setNome(string);
        void setTelefone(string);
        void setIdade(int);
        
    private:
        std::string nome;
        std::string telefone;
        int idade;
};

#endif