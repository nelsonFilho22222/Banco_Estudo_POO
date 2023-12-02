#include "cpf.hpp"


//construtor
Cpf::Cpf(std::string numero)
	:numero(numero)
{
	//validação do cpf
}
std::string Cpf::recuperaNumero()
{
	return numero;
}