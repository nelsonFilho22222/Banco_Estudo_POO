#pragma once
#include "funcionario.hpp"
class Caixa final : public Funcionario
{
public:
	Caixa(Cpf cpf, std::string nome, float salario);
	float bonificacao() const;
};

