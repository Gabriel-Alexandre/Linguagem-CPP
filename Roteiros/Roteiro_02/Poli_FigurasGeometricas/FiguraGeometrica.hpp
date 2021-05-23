#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H
#include <string>

using namespace std;
	
class FiguraGeometrica  {
	protected:
		string nome;
		int tipo;

	public:
		FiguraGeometrica();
		FiguraGeometrica(int tipo);
		virtual float calcularArea() = 0;
		virtual void lerAtributosArea() = 0;
		string getNome();
};

#endif