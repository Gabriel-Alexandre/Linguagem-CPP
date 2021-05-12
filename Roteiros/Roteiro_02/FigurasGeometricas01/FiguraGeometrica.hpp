#pragma once
#include <string>

using namespace std;
	
class FiguraGeometrica  
{
	protected:
		string nome;
		int tipo;

	public:
		FiguraGeometrica();
		FiguraGeometrica(int tipo);
		float calcularArea();
		void lerAtributosArea();
		string getNome();

};