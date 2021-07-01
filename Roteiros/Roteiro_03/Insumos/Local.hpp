#ifndef LOCAL_H
#define LOCAL_H
#include <string>
#include <vector>
#include "Insumo.hpp"
	
class Local  
{
	private:
		std::string nome;
		int tipo;
		std::vector<Insumo*> insumoV;
		Insumo *insumoA[3];

		

	public:

		Local();
		~Local();
		Local(std::string, int);
		void addInsumoA(Insumo *in, int index);
		void addInsumoV(Insumo *in);

};
#endif