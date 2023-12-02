#pragma once
#include "conta.hpp"
class contaCorrente final : public Conta
{
public:
	contaCorrente(std::string numero, Titular titular);
	float taxaDeSaque() const override;
	void transferePara(Conta& conta, float valor);
};

