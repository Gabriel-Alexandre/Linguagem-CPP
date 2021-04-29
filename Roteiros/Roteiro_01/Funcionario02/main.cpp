#include "Funcionario02.h"
#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    float salarioMensal, salarioAnual;
    string nome, sobrenome;

    cin >> n;
    getchar();

    Funcionario02 p[n];

    for (int i = 0; i < n; i++){
        getline(cin, nome);
        getline(cin, sobrenome);
        cin >> salarioMensal;
        getchar();

        //Obs: Em vez de fazer os métodos set, eu posso inicializar as variáveis com um construtor com 3 parâmetros
        p[i].setNome(nome);
        p[i].setSobrenome(sobrenome);
        p[i].setSalarioMensal(salarioMensal);
    }

    for(int i = 0; i < n; i++) {
        cout << p[i].getNome() << " " <<
         p[i].getSobrenome() << " - " <<
         p[i].getSalarioMensal() << " - " <<
         p[i].getSalarioAnual() << endl;

         salarioAnual = p[i].getSalarioAnual();
         p[i].aumentaSalario(salarioAnual);
         
         cout << p[i].getSalarioAnual(salarioAnual) << endl;
    }
}