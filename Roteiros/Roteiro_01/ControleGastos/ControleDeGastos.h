#ifndef CONTROLEDEGASTOS_H
#define CONTROLEDEGASTOS_H
#include <string>
#include <vector>
//Faço o include do arquivo, não da classe.
#include "Despesa.h"

using namespace std;

//Qualquer coisa é só olhar o vídeo da aula ou o código do professor. (Para entender melhor).

class ControleDeGastos {
    public:
        ControleDeGastos();
        void setDespesa(Despesa d);
        float calculaTotalDeDespesas();
        float calculaTotalDeDespesas(string t);
        bool existeDespesaDoTipo(string t);
        Despesa getDespesa(int p);

    private:
        //Composição (Quando eu crio um objeto de uma classe, em outra classe) >> No caso eu estou criando um objeto da classe que eu estou incluindo, que no caso é "Despesa.h", assim sendo esse objeto vai funcionar normalmente. 
        //Sugestão: Fazer essa com vector.
        vector <Despesa> despesas;

};

/*
Lembrar: Eu posso comparar duas string usando o '=='. (Nesse caso, as string precisam ser exatamente iguais).
*/

#endif