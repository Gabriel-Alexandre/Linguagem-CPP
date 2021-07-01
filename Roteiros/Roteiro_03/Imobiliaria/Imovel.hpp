#ifndef IMOVEL_H
#define IMOVEL_H
#include <string>
	
class Imovel  
{
	protected:
		std::string nome, disponibilidade;
		double valorImovel;

	public:

		Imovel(std::string nome, std::string disponibilidade, double valorImovel);
		std::string getNome();
		std::string getDisponibilidade();
		double getValorImovel();
		virtual ~Imovel();

};
#endif