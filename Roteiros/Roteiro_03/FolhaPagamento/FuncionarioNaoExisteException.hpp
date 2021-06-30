#ifndef FUNCIONARIONAOEXISTEEXCEPTION_H
#define FUNCIONARIONAOEXISTEEXCEPTION_H
#include <exception>
#include <string>
	
class FuncionarioNaoExisteException : public std::exception{
	private:

	public:

		FuncionarioNaoExisteException(std::string);

};
#endif