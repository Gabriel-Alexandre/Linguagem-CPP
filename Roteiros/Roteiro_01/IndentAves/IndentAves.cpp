#include "IndentAves.h"
#include <iostream>
#include <string>

using namespace std;

IndentAves::IndentAves(){

}

int IndentAves::tabelaAves(string ave){
    if(ave == "01011") {
        return 1;
        //Coruja
    }

    if(ave == "00010") {
        return 2;
        //Pardal
    }

    if(ave == "00110") {
        return 3;
        //Galinha
    }

    if(ave == "01000") {
        return 4;
        //Ema
    }

    if(ave == "01010") {
        return 5;
        //Falcão
    }

    if(ave == "10010") {
        return 6;
        //Pato
    }

    if(ave == "11000") {
        return 7;
        //Pinguin
    }

    if(ave == "11010") {
        return 8;
        //Gaivota
    }

    if(ave == "11011") {
        return 9;
        //Garça
    }

    if(ave == "00000") {
        return 10;
        //Avestruz
    }
}