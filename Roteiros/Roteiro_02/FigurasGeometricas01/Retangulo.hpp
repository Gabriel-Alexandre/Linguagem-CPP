#pragma once
#include "FiguraGeometrica.hpp"
	
class Retangulo : public FiguraGeometrica
{
	private:
		float largura;
		float comprimento;

	public:
		Retangulo();
		Retangulo(int tipo);
		float calcularArea();
		void lerAtributosArea();
};