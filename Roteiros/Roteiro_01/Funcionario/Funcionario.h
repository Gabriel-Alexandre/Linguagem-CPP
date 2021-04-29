#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H
#include <string>

class Funcionario {
    public:
        Funcionario();
        float getSalarioAnual();
        std::string nome;
        std::string sobrenome;
        float salarioMensal;
};

#endif