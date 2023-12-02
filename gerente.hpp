#pragma once
#include "funcionario.hpp"
#include "autenticavel.hpp"
class Gerente final : public Funcionario, Autenticavel
{
public:
	Gerente(Cpf cpf, std::string nome, float salario, std::string senha);
	float bonificacao() const;
};

