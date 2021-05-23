#ifndef RETANGULO_H
#define RETANGULO_H
#include "FiguraGeometrica.hpp"
	
class Retangulo : public FiguraGeometrica
{
	private:
		float largura;
		float comprimento;

	public:
		Retangulo();
		float calcularArea();
		void lerAtributosArea();
};
#endif