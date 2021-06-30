#include "FuncionarioNaoExisteException.hpp" 
#include <iostream>

using namespace std;
	
FuncionarioNaoExisteException::FuncionarioNaoExisteException(std::string nome) {
	cout << "FuncionarioNaoExisteException " << nome << endl;
}
	
