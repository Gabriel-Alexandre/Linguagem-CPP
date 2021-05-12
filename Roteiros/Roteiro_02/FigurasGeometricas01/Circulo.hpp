#pragma once
#include "FiguraGeometrica.hpp"
	
class Circulo : public FiguraGeometrica 
{
	private:
		float raio;

	public:
		Circulo();
		Circulo(int tipo);
		float calcularArea();
		void lerAtributosArea();
};