#ifndef FUNCIONARIONAOEXISTEEXCEPTION_H
#define FUNCIONARIONAOEXISTEEXCEPTION_H
#include <exception>
	
class FuncionarioNaoExisteException : public std::exception{
	private:

	public:

		FuncionarioNaoExisteException();

};
#endif