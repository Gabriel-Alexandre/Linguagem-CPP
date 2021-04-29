#include "Funcionario.h"
#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;

    cin >> n;
    getchar();

    Funcionario p[n];

    for (int i = 0; i < n; i++){
        getline(cin, p[i].nome);
        getline(cin, p[i].sobrenome);
        cin >> p[i].salarioMensal;
        getchar();
    }

    for(int i = 0; i < n; i++) {
        cout << p[i].nome << " " <<
         p[i].sobrenome << " - " <<
         p[i].salarioMensal << " - " <<
         p[i].getSalarioAnual() << endl;
    }
}