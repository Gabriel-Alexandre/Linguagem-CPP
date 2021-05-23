#ifndef QUADRADO_H
#define QUADRADO_H
#include "FiguraGeometrica.hpp"
	
class Quadrado : public FiguraGeometrica {
	private:
		float lado;

	public:
		Quadrado();
		float calcularArea();
		void lerAtributosArea();
};
#endif