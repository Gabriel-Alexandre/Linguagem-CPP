#ifndef FUNCIONARIO02_H
#define FUNCIONARIO02_H
#include <string>

using namespace std;

class Funcionario02 {
    public:
        Funcionario02();
        void aumentaSalario(float);
        string getNome();
        string getSobrenome();
        float getSalarioMensal();
        float getSalarioAnual();
        float getSalarioAnual(float);
        void setNome(string);
        void setSobrenome(string);
        void setSalarioMensal(float);

    private:
        string nome;
        string sobrenome;
        float salarioMensal;
        float salarioAnual;
};

#endif