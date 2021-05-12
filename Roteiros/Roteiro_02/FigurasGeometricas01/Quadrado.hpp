#pragma once
#include "FiguraGeometrica.hpp"
	
class Quadrado : public FiguraGeometrica {
	private:
		float lado;

	public:
		Quadrado();
		Quadrado(int tipo);
		float calcularArea();
		void lerAtributosArea();
};