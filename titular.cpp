#include "titular.hpp"
#include <iostream>


//construtor
Titular::Titular(Cpf cpf, std::string nome, std::string senha)
	:Pessoa(cpf, nome), Autenticavel(senha)
{
}

