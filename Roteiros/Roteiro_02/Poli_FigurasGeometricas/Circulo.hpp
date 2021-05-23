#ifndef CIRCULO_H
#define CIRCULO_H
#include "FiguraGeometrica.hpp"
	
class Circulo : public FiguraGeometrica 
{
	private:
		float raio;

	public:
		Circulo();
		float calcularArea();
		void lerAtributosArea();
};
#endif