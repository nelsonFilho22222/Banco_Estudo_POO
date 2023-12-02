#include <iostream>
#include "contaPoupanca.hpp"

contaPoupanca::contaPoupanca(std::string numero, Titular titular) : Conta(numero, titular)
{
}

float contaPoupanca::taxaDeSaque() const
{
		return 0.03;
}

