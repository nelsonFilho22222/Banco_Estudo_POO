#include "contaCorrente.hpp"
#include <iostream>
contaCorrente::contaCorrente(std::string numero, Titular titular) :Conta (numero, titular)
{
}
float contaCorrente::taxaDeSaque() const
{
	return 0.05;
}
void contaCorrente::transferePara(Conta& destino, float valor)
{
	sacar(valor);
	destino.depositar(valor);
}