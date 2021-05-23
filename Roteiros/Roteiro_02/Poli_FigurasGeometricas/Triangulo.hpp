#ifndef TRIANGULO_H
#define TRIANGULO_H
#include "FiguraGeometrica.hpp"
	
class Triangulo : public FiguraGeometrica {
	private:
		float base;
		float altura;

	public:
		Triangulo();
		float calcularArea();
		void lerAtributosArea();
};
#endif