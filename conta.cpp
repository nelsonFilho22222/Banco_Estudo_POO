#include "conta.hpp"
#include <iostream>
#include <string>
//Construtores
int Conta::numeroDeContas = 0;
Conta::Conta(std::string numero, Titular titular)
	:numero(numero),titular(titular), saldo(0)
{
	numeroDeContas++;
}
//Destrutores
Conta::~Conta()
{
    numeroDeContas--;
}
//Metodos

void Conta::sacar(float valorASacar)
{
	if (valorASacar < 0) {
		std::cout << "não pode sacar valor negativo" << std::endl;
		return;
	}
	float tarifaDeSaque = valorASacar * taxaDeSaque();
	float valorDoSaque = valorASacar + tarifaDeSaque;

	if (valorDoSaque > saldo) {
		std::cout << "Saldo para Saque Insuficiente" << std::endl;
		return;
	}
	saldo -= valorDoSaque;
}
void Conta::depositar(float valorADepositar)
{
	if (valorADepositar < 0) {
		std::cout << "Não é possivel depositar valor negativo" << std::endl;
		return;
	}
	
	saldo += valorADepositar;
}

//Get
float Conta::recuperaSaldo() const
{
	return saldo;
}
std::string Conta::recuperaNumero()
{
	return numero;
}

int Conta::recuperaNumeroDeContas() 
{
	return numeroDeContas;
}

//Set

