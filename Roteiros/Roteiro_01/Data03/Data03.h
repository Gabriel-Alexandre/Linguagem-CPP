#ifndef DATA03_H
#define DATA03_H
#include <string>

using namespace std;

class Data03 {
    public:
        Data03();
        void setDia(int);
        void setMes(int);
        void setAno(int);
        void setAvancarDia(int);
        string getDia();
        string getMes();
        int getAno();
        int getAvancarDia();
        int getDiaMes(int);
        void avancar();

    private:
        int dia;
        int mes;
        int ano;
        int avancarDia;
};
#endif
