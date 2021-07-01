#include "Local.hpp"  
#include <iostream>

using namespace std;
	
Local::Local()
{
	tipo = 0;

	for(int i = 0; i < 3; i++){

		insumoA[i] = 0; 

	}

}

Local::Local(std::string n, int t)
{
	nome = n;
    tipo = t;
}
	
Local::~Local()
{
	cout << "Deletando Local\n";
	
	for(int i = 0; i < 3; i++){
		if(insumoA[i] != NULL)
			delete insumoA[i];
		insumoA[i] = NULL; //Recomendado
	}

	for(int i = 0; i < 3; i++){
		if(insumoV[i] != NULL)
			delete insumoV[i];
		insumoV[i] = NULL; //Recomendado
	}

	insumoV.clear();
}

void Local::addInsumoA(Insumo *in, int index) {
	insumoA[index] = in;
}

void Local::addInsumoV(Insumo *in) {
	insumoV.push_back(in);
}
