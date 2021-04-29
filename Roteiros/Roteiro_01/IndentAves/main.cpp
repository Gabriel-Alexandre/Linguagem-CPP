#include "IndentAves.h"
#include <iostream>
#include <string>

using namespace std;

int main() {
    int numero, op;
    string ave;
    IndentAves a;
    
    for(int i = 0; i < 5; i++){
        cin >> numero;
        ave = ave + to_string(numero);
    }

    op = a.tabelaAves(ave);

    if(op == 1) {
        cout << "coruja" << endl;  
    }

    if(op == 2) {
        cout << "pardal" << endl;
    }

    if(op == 3) {
        cout << "galinha" << endl;
    }

    if(op == 4) {
        cout << "ema" << endl;
    }

    if(op == 5) {
        cout << "falcão" << endl;
    }

    if(op == 6) {
        cout << "pato" << endl;
    }

    if(op == 7) {
        cout << "pinguim" << endl;
    }

    if(op == 8) {
        cout << "gaivota" << endl;
    }

    if(op == 9) {
        cout << "garça" << endl;
    }

    if(op == 10) {
        cout << "avestruz" << endl;
    }
}