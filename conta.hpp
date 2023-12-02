#pragma once
#include <string>
#include "titular.hpp"

class Conta 
{
private:
	static int numeroDeContas;
public:
	//get para recuperar numero de contas
	static int recuperaNumeroDeContas();
private:
	std::string numero;
	Titular titular;
protected:
	float saldo;
	

public:
	//Construtores
	Conta(std::string numero, Titular titular);
	//Destrutores
	virtual ~Conta();
	//Metodos
	void sacar(float valorADepositar);
	virtual float taxaDeSaque() const = 0;
	void depositar(float valorASacar);
	//get
	float recuperaSaldo() const;
	std::string recuperaNumero();
	//set
};