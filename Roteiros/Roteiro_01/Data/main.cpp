#include "Data.h"
#include <iostream>

using namespace std;

int main() {
    //Posso utilizar o objeto normal (Alocação estática). (dat.dia).
    //Utilizando ponteiros: (Alocação dinâmica).
    Data *dat = new Data();
    //dat = new Data(); (Poderia ser assim).

    cin >> dat->dia;
    cin >> dat->mes;
    cin >> dat->ano;

    cout << dat->dia << "/" << dat->mes << "/" << dat->ano << endl;

    delete dat;
}