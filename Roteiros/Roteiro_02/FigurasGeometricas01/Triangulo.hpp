#pragma once
#include "FiguraGeometrica.hpp"
	
class Triangulo : public FiguraGeometrica {
	private:
		float base;
		float altura;

	public:
		Triangulo();
		Triangulo(int tipo);
		float calcularArea();
		void lerAtributosArea();
};