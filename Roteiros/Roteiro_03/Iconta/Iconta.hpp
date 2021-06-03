#ifndef ICONTA_H
#define ICONTA_H
	
class Iconta  {
	private:

	public:

		Iconta();
		virtual void sacar(double valor) = 0;
		virtual void depositar(double valor) = 0;
		virtual double saldoTotalDisponivel() = 0;

};
#endif