#pragma once
#include <string>
#include "cpf.hpp"
class Pessoa
{
	//atributos
protected:
	Cpf cpf;
	std::string nome;
	//construtores
public:
	Pessoa(Cpf cpf, std::string nome);
	//metodos
private:
	void verificaTamanhoDoNome();
};

