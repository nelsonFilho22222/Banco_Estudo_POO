#pragma once
#include <string>
#include "pessoa.hpp"
#include "autenticavel.hpp"

//Titular herda pessoa
class Titular : public Pessoa, Autenticavel
{
public:
	Titular(Cpf Cpf, std::string nome, std::string senha);
};

