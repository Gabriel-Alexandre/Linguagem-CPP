#include <stdio.h>
#include <string.h>

typedef struct{
    char nome[40];
    int numero;
    int Qvotos;
}t_voto;

int main(void){
    int candidatosNum;
    int maior, vencedor;
    int nulo = 0, soma = 0;
    int c = 0;

    scanf("%d", &candidatosNum);

    t_voto candidato[candidatosNum];

    //Cadastro:
    for(int i = 0; i < candidatosNum; i++){
        scanf("%d", &candidato[i].numero);
        getchar();
        fgets(candidato[i].nome, 40, stdin);
        candidato[i].nome[strlen(candidato[i].nome) - 1] = '\0';
    }

    //Votação:
    for(int k = 0; k <= candidatosNum; k++){
        candidato[k].Qvotos = 0;
        }

    while(1){
        int votos;
        int i, c;
        int indentificador;

        scanf("%d", &votos);

        if(votos <= 0){
            break;
        }

        c = 0;
        indentificador = c;

        for(i = 0; i <= candidatosNum; i++){

            if(candidato[i].numero == votos){
                candidato[i].Qvotos = candidato[i].Qvotos + 1;
                c++;
                }
            }
        if(indentificador == c){

                nulo = nulo + 1;
            }
        }

    //Percentual:
    for(int l = 0; l <= candidatosNum; l++){
        soma = soma + candidato[l].Qvotos;
    }

    soma = soma + nulo;

    //Indentifica_Vencedor:
    for(int m = 0; m <= candidatosNum; m++){
        if (c == 0){
            maior = candidato[m].Qvotos;
            vencedor = candidato[m].numero;
            c++;
        }
        if (candidato[m].Qvotos > maior){
            maior = candidato[m].Qvotos;
            vencedor = candidato[m].numero;
        }
    }

    //Saida:
    for(int n = 0; n < candidatosNum; n++){
        printf("%.2f - %d - %s ", ((100 *(candidato[n].Qvotos) * 1.0) / (soma * 1.0)), candidato[n].numero, candidato[n].nome);
        if(candidato[n].numero == vencedor){
            printf("VENCEDOR \n");
        }else{
            printf("\n");
        }
    }
    printf("%.2f - Nulos\n", ((100 * nulo) * 1.0) / (soma * 1.0));

    /*
    printf("_________________DIFERENTE_______________\n\n\n");

    for(int j = 0; j < candidatosNum; j++){
        printf("%s - %d - %d\n", candidato[j].nome, candidato[j].numero, candidato[j].Qvotos);
    }

    printf("Nulo: %d\n", nulo);
    printf("Soma: %d\n", soma);
    printf("Vencedor: %d\n", vencedor);*/

    return 0;
}
