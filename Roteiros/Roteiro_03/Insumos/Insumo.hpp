#ifndef INSUMO_H
#define INSUMO_H
#include <string>

//((Nome do objeto filho) Nome do objeto pai)

// Isso é uma tecnica de casting para poder utilizar métodos específicos das classes filhas

	
class Insumo  
{
	protected:
		std::string nome;
		std::string dtVencimento;
		std::string nomeFabricante;
		int quantidade;
		int valorUnitario;
		int tipoInsumo;

	public:

		Insumo(std::string, std::string, std::string, int, int, int);
		virtual ~Insumo();

};
#endif