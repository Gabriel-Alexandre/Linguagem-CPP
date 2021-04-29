#ifndef DATA02_H
#define DATA02_H

class Data02 {
   public:
        Data02();
        void printData();
        void setDia(int);
        void setMes(int);
        void setAno(int);
        int getDia();
        int getMes();
        int getAno();

    private:
        int dia;
        int mes;
        int ano; 
};
#endif