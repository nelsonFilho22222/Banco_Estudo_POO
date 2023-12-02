#pragma once
#include "conta.hpp"


class contaPoupanca : public Conta
{
public:
	//construtores
	contaPoupanca(std::string numero, Titular titular);
	//metodos
	float taxaDeSaque() const override;

};

