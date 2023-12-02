#pragma once
#include "cpf.hpp"
#include "pessoa.hpp"
#include <string>
class Funcionario : public Pessoa
{
	//atributos
private:
	float salario;
	std::string nome;
public:
	//construtores
	Funcionario(Cpf cpf, std::string nome, float salario);
	virtual float bonificacao() const = 0;
	//get
	float recuperaSalario() const;
	std::string recuperaNome() const;
};

