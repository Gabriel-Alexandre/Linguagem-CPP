#include <iostream>

using namespace std;

int main () {
    int numeros;
    int j;

    cin >> numeros;

    int vetor[numeros];

    //(Preenche o vetor) + (substitui por 0)
    for (int i = 0; i < numeros; i++) {
        cin >> vetor[i];
    }

    //(Conta repetidos)
    for (int i = 0; i < numeros; i++) {
        for(j = i + 1; j < numeros; j++) {
            if (vetor[i] == vetor[j])
                vetor[j] = 0;
        }
    }

    //(Exibe o vetor)
    for (int i = 0; i < numeros; i++) {
        if (vetor[i] > 0)
            cout << vetor[i] << " ";
    }
    cout << endl;

    return 0;
}